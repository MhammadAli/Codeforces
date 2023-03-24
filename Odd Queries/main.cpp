#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, q, n;
    long long k, sum, l, r, temp;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n >> q;
        vector<long long> prefix;
        prefix.push_back(0);
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            prefix.push_back(temp);
            sum += temp;
        }
        for (int i = 1; i < prefix.size(); ++i) {
            prefix[i] += prefix[i - 1];
        }
        for (int i = 0; i < q; ++i) {
            cin >> l >> r >> k;
            if ((sum - (prefix[r] - prefix[l - 1]) + (r - l + 1) * k) % 2 == 0) {
                cout << "NO" << endl;

            } else {
                cout << "YES" << endl;

            }

        }


    }
    return 0;
}
