#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    cin >> i;
    while (i--) {
        int j;
        cin >> j;
        map<int, int> k;
        for (int l = 0; l < j; l++) {
            int m;
            cin >> m;
            k[m]++;
        }
        int n = 0;
        for (auto l : k) {
            if (l.second >= n) {
                n = l.second;
            }
        }
        cout << j - n << endl;
    }
return 0;
}
