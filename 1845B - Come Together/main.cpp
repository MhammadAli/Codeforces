#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    pair<int, int> a, b, c;
    while (t--) {

        cin >> a.first >> a.second;
        cin >> b.first >> b.second;
        cin >> c.first >> c.second;

        cout << ((abs(a.first - b.first) + abs(a.second - b.second)) + // distance between A and B
                 (abs(a.first - c.first) + abs(a.second - c.second)) - // distance between A and C
                 (abs(b.first - c.first) + abs(b.second - c.second))) / 2 + 1 << endl;
    }
    return 0;
}
