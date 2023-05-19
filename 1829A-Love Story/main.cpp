#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, ans;
    string a;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> a;
        for (int i = 0; i < 1; ++i) {
            if (a[0] != 'c')
                ans++;
            if (a[1] != 'o')
                ans++;
            if (a[2] != 'd')
                ans++;
            if (a[3] != 'e')
                ans++;
            if (a[4] != 'f')
                ans++;
            if (a[5] != 'o')
                ans++;
            if (a[6] != 'r')
                ans++;
            if (a[7] != 'c')
                ans++;
            if (a[8] != 'e')
                ans++;
            if (a[9] != 's')
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
