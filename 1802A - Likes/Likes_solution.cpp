#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, temp, ans, neg, pos;
    cin >> t;
    while (t--) {
        ans = neg = pos = 0;
        cin >> n;
        vector<int> vc;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            if (temp > 0)
                pos++;
            else
                neg++;
            vc.push_back(temp);

        }
        sort(vc.begin(), vc.end());
        reverse(vc.begin(), vc.end());
        for (int i: vc) {// Maximum Likes
            if (i > 0)
                cout << ++ans << " ";
            else
                cout << --ans << " ";

        }
        cout << endl;
        while (neg && pos) { // Minimum Likes
            cout << 1 << " " << 0 << " ";
            neg--;
            pos--;
        }
        for (int i = 1; i <= pos; ++i) {// Minimum Likes
            cout << i << " ";

        }
        cout << endl;
    }
    return 0;
}
