#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, temp, n, even, odd;
    cin >> t;
    while (t--) {
        even = 0;
        odd = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            if (temp % 2 == 0)
                even += temp;
            else
                odd += temp;

        }
        if (even > odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
