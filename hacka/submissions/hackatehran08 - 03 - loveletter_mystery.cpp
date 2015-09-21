#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        string s;
        cin >> s;
        int cost = 0;
        for (int i = 0, j = s.size() - 1; i < j; ++i, --j)
            cost += abs(s[i] - s[j]);
        cout << cost << endl;
    }
    return 0;
}
