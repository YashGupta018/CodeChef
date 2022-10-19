#include <bits/stdc++.h>
using namespace std;
int main() {
    int tbkc = 1;
    cin >> tbkc;
    for (int j = 1; j <= tbkc; j++) {
        int n;
        cin >>  n;
        int a[n];
        int bsdk = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1)
            bsdk++;
            }
            int bc = n-bsdk;
            int result = 0;
        if(bsdk >= bc) {
            result = bc;
            bsdk -= bc;
        }
        else {
            result = bsdk;
            bsdk = 0;
        }
        result += bsdk/3;
        cout << result << endl;
    }
    return 0;
}