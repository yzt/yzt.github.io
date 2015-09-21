#include <iostream>
using namespace std;

int const Max = 1000000;
int Rep [Max + 1];

int main() {
    int T = 0;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        for (int i = 0; i <= Max; ++i) Rep[i] = 0;
        int n = 0;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int x = 0;
            cin >> x;
            ++Rep[x];
        }
        
        long long cnt = 0;
        for (int i = 0; i <= Max; ++i)
        {
            if (Rep[i] > 1)
            {
                long long v = Rep[i];
                cnt += v * (v - 1);
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}
