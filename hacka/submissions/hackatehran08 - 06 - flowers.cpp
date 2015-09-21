#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> c (n);
    for(int i = 0; i < n; i++)
        cin >> c[i];
   
    sort (c.begin(), c.end());
    reverse (c.begin(), c.end());
    
    int result = 0;
    for (int i = 0; i < c.size(); ++i)
        result += ((i / k) + 1) * c[i];
    cout << result << endl;
   
   return 0;
}
