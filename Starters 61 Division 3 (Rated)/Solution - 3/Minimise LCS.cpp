#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int c;
    int d = 0;
    string e;
    string f;
    cin >> c >> e >> f;
    map<char, int> P,Q;
    for(char i:e) P[i]++;
    for(char i:f) Q[i]++;
    for(char i ='a';i <= 'z';++i)
    d = max(d, min(P[i], Q[i]));
    cout << d << endl;
    }
    signed main() {
        int T;
        cin >> T;
    while(T--) solve();
}