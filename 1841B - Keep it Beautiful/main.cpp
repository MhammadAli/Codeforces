#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int q;
        cin >> q;

        vector<int> a;
        int cnt = 0;

        for (int i = 0; i < q; ++i) {
            int x;
            cin >> x;

            int nw_cnt = cnt + (a.size() > 0 && a.back() > x);

            if (nw_cnt == 0 || (nw_cnt == 1 && x <= a[0])) {
                a.push_back(x);
                cnt = nw_cnt;
                cout << "1";
            } else {
                cout << "0";
            }
        }

        cout << endl;
    }

    return 0;
}
