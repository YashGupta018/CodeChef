#include<bits/stdc++.h>
#define int long long
using namespace std;
    // your code goes hereZ
int a, b;
void solve() {
    cin >> a;
    b = 0;
    while(a % 2 == 0) {
        b++;
        a /= 2;
    }
    if(b % 2 == 1) {
        b--;
        a *= 2;
    }
    for(int i = 0; i * i <= a; ++i) {
        int y = a - i * i, z = sqrt(y);
        if(z * z == y) {
            cout << (z << (b / 2)) << ' ' << (i << (b / 2)) << endl;
            return;
        }
    }
    puts("-1");
}
signed main() {
    int T;
    cin >> T;
    while(T--)
        solve();
}