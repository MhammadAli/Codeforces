#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long n, sum;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = n;
        for (int i = 0; n != 0; ++i) {
            sum += n / 2;
            n /= 2;
        }
        cout << sum << endl;
    }
    return 0;
}
