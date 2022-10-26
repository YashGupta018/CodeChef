#include<bits/stdc++.h>
#define int long long
using namespace std;
int a, b;
string c;
void solve() {
    cin >> a >> c;
    b = 0;
    for(int i = 1; i < a; ++i)
        b += c [i] != c [i - 1];
cout << (b + ( c[0] == 49) ) / 2 << endl;
}
signed main() {
    int T;
    cin >> T;
    while(T--)
        solve();
}