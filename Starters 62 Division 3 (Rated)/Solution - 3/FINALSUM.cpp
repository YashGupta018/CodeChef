#include<bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c, d;
void solve() {
    cin >> b >> d; a = 0;
    for(int i = 1; i <= b; ++i) {
        cin >> c;
        a += c;
    }
    for(int i = 1, e, f; i <= d; ++i) {
        cin >> e >> f;
        a += (f - e + 1) % 2;
    }
    cout << a << endl;
}
signed main() {
    int T;
    cin >> T;
    while(T--)
        solve();
}