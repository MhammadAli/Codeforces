#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    bool s1, s2;
    long long ans1, ans2;
    string a;
    cin >> t;
    while (t--) {
        ans1 = ans2 = 0;
        s1 = s2 = false;
        cin >> n;
        pair<int, string> arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i].first;
            cin >> arr[i].second;

        }
        sort(arr, arr + n);
        for (int i = 0; i < n; ++i) {
            if (arr[i].second[0] == '1' && !s1 && arr[i].second[1] != '1') {
                s1 = true;
                ans1 += arr[i].first;
            }
            if (arr[i].second[1] == '1' && !s2 && arr[i].second[0] != '1') {
                s2 = true;
                ans1 += arr[i].first;
            }

        }
        for (int i = 0; i < n; ++i) {
            if (arr[i].second[0] == '1' && arr[i].second[1] == '1') {
                if (arr[i].first < ans2 || ans2 == 0)
                    ans2 = arr[i].first;
            }

        }
        if (s1 && s2) {
            if (ans2 > 0)
                cout << min(ans1, ans2) << endl;
            else
                cout << ans1 << endl;

        } else if (ans2 > 0)
            cout << ans2 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
