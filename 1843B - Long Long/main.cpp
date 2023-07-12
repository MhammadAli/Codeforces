#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, moves;
    bool positive;
    long long sum;
    cin >> t;
    while (t--) {
        sum = moves = 0;
        positive = true;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += abs(arr[i]);

        }
        for (int i = 0; i < n; ++i) {
            if (arr[i] < 0 && positive) {
                moves++;
                positive = false;
            }
            if (arr[i] > 0)
                positive = true;

        }
        cout << sum << " " << moves << endl;

    }
    return 0;
}
