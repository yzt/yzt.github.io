#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string s = string(n - 1, ' ') + string(n, '#');
    for (int i = 0; i < n; ++i)
        cout << s.substr(i, n) << endl;
    return 0;
}
