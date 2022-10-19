#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define rojka ll n; cin >> n; ll a[n]; for(int i = 0; i < n; i++) {cin >> a[i];} 

ll maxmax(ll a, ll b, ll c) {
    return max(a, max(b, c)); 
    }
    ll minmin(ll a, ll b, ll c) {
        return min(a, min(b, c)); 
        }
        ll gcd(ll a, ll b) {
            return __gcd(a, b); 
            }
            int main() {
                ios_base::sync_with_stdio(false); 
                cin.tie(NULL); 
                ll kya_ques_hai_bc; 
                kya_ques_hai_bc=1; 
                cin >> kya_ques_hai_bc; 
            while(kya_ques_hai_bc--) {
                ll n;
                cin >> n;
                ll a[n];
            for(int i = 0; i < n; i++) {
                cin >> a[i]; 
            }
            vector <ll> v;
            v.push_back(1); 
        for(int i = 1; i < n-1; i++) {
            if(a[i] > a[i-1] && a[i] > a[i+1]) {
                v.push_back(i + 1);
                }
            }
            v.push_back(n);
            ll result = 0;
            ll tmkc;
        for(int i=1;i<v.size();i++) {
            tmkc = v[i] - v[i - 1] + 1;
            result += (tmkc * (tmkc + 1)) / 2;
        }
        result-=(v.size()-2);
        cout<<result<<"\n";
    }
    return 0;
}