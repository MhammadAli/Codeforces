#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, z, ans, n, temp;
    cin >> t;
    while (t--) {
        z = ans = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            if (temp == 0) {
                z++;
            } else {
                if (z >= ans)
                    ans = z;
                z = 0;
            }
        }
        ans = max(ans, z);
        cout << ans << endl;
    }
    return 0;
}
