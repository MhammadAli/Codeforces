#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k, x;
    cin >> t;
    while (t--) {
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n" << n << endl;
            for (int i = 0; i < n; ++i) {
                cout << 1 << " ";

            }
            cout << endl;
        } else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO" << endl;
        } else {
            cout << "YES\n" << n / 2 << endl;
            (n % 2 == 1) ? cout << 3 << " " : cout << 2 << " ";
            for (int i = 1; i < n / 2; ++i) {
                cout << 2 << " ";

            }
            cout << endl;
        }
        
    }
    return 0;
}
