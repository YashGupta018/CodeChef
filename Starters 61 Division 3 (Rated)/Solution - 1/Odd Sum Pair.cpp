#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int bankalnd;
    cin >> bankalnd;
    while (bankalnd--) {
        int fkof[3], bc = 0,mc=0;
        for (int i = 0; i < 3; i++) {
            cin >> fkof[i];
            if (fkof[i] % 2 != 0) {
                bc++;
            }
            else {
                mc++;
                }
            }
        (mc >= 1 && bc >= 1 && 1) ? cout << "Yes" << endl : cout << "No" << endl;
    }
}