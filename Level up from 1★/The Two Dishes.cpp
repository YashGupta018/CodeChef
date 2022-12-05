#include <iostream>
#include"bits/stdc++.h"
#include<math.h>
#include<string>
#include<vector>
using namespace std;
#define rp long long

int main() {
    rp t;
    cin>>t;
    while(t--) {
        int n,s;
        cin>>n>>s;
        if(n>=s) cout<<s<<endl;
        else {
            int p= n;
            int q= s-p;
            cout<<p-q<<endl;
        }
    }
	return 0;
}
