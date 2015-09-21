#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int Countrymen (vector<vector<int>> const & adj, vector<bool> & visited, int i)
{
    if (visited[i]) return 0;
    
    int pop = 1;
    visited[i] = true;
    
    for (auto j : adj[i])
        if (!visited[j])
            pop += Countrymen(adj, visited, j);
        
    return pop;
}

int main()
{ 
    int N, I;
    cin >> N >> I;
    vector<vector<int>> adj (N);
    for (int i = 0; i < I; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back (b);
        adj[b].push_back (a);
        //adj[a][b] = adj[b][a] = true;
    }
    for (auto & a : adj)
        sort (a.begin(), a.end());
    
    vector<int> pops;
    vector<bool> visited (N, false);
    for (int i = 0; i < N; ++i)
        if (!visited[i])
            pops.push_back(Countrymen(adj, visited, i));
        
    long long result = (long long)N * (N - 1) / 2;
    for (long long p : pops)
        result -= p * (p - 1) / 2;
    
    cout << result << endl;
    return 0;
}
