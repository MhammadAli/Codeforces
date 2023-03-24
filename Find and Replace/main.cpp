#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    bool ok, ok2;
    string a;
    cin >> t;
    while (t--) {
        ok = false;
        ok2 = true;
        cin >> n >> a;
        for (int i = 0; i < a.length(); ++i) {
            for (int j = 0; j < a.length(); ++j) {
                if (a[i] == a[j]) {
                    if ((j - i - 1) % 2 == 0) {
                        cout << "NO" << endl;
                        ok = true;
                        break;
                    }
                }

            }
            if (ok) {
                ok2 = false;
                break;
            }

        }
        if (ok2)
            cout << "YES" << endl;
    }
    return 0;
}
