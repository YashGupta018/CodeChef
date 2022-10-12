#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    cin >> i;
    while(i--) {
        int j;
        cin >> j;
        string k;
        cin >> k;
        int a = 0, b = 0;
        for(auto c:k) {
            if(c == '0')
            b++;
            else a++;
        }
        if(a % 2 == 0 or b % 2 == 0)
        cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}