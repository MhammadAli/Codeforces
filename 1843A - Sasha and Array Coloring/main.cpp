#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, sum;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        for (int f = 0, l = n - 1; f <= l; ++f, --l) {
            sum += arr[l] - arr[f];
        }
        cout << sum << endl;

    }
    return 0;
}
