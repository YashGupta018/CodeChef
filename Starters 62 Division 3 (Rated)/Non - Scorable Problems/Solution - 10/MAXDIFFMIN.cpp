#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int a;
    cin >> a;
    while(a--) {
        int b, c, d;
        cin >> b >> c >> d;
        int maxi = 0;
        int mini = 0;
        int result = 0;
        maxi = max(b, c);
        maxi = max(maxi, d);
        mini = min(b, c);
        mini = min(mini, d);
        cout << maxi - mini << endl;
    }
    return 0;
}
