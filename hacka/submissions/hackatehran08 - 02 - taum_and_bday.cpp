#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        long long b, w, x, y, z;
        cin >> b >> w >> x >> y >> z;
        
        long long xx = min(x, y + z);
        long long yy = min(y, x + z);
        
        cout << (b * xx + w * yy) << endl;
    }
    return 0;
}
