#include<bits/stdc++.h>
#define int long long
using namespace std;
int i, j;
void solve() {
    cin >> i >> j;
    puts( i <= j / 2 || i == j? "Yes" : "No");
}
signed main() {
    int T;
    cin >> T;
    while(T--)
        solve();
}
