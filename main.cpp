#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    bool ok = false;
    while (x > 0) {
        ok |= (x % 10 == 7);
        x /= 10;
    }
    cout << (ok ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--)
        solve();
}
