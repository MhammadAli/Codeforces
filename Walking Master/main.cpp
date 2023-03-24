#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        if (d >= b && a - b + d >= c)
            cout << (d - b) + ((a + d - b) - c) << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
