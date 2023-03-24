#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (abs(a) == abs(b))
            cout << 2 * abs(a) << endl;
        else
            cout << 2 * max(abs(a), abs(b)) - 1 << endl;
    }
    return 0;
}
