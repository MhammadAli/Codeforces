#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, m;
    long long sum1, sum2, temp;
    cin >> t;
    while (t--) {
        sum1 = sum2 = 0;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {

            cin >> temp;
            sum1 += temp;
        }
        for (int i = 0; i < m; ++i) {
            cin >> temp;
            sum2 += temp;
        }

        if (sum1 > sum2)
            cout << "Tsondu\n";
        else if (sum2 > sum1)
            cout << "Tenzing\n";
        else
            cout << "Draw\n";
    }
    return 0;
}
