#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int rndk;
    cin >> rndk;
    while (rndk--) {
        int mc, lol = 0;
        cin >> mc;
        string lnd;
        cin >> lnd;
        for (int j = 1; j < mc; j++) {
            if (lnd[j] == lnd[j - 1])
            lol++;
        }
    cout << lol << endl;
    }
}