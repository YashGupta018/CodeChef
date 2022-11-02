#include <iostream>
using namespace std;

void solve() {
    int d;
    cin >> d;
    string e;
    cin >> e;
    if(d == 1) {
        cout << "YES" << endl;
    return ;
    }
    int o = 0;
    for(int i = 0; i < d; i++) {
        if(e[i] == '0') {
            if(o % 2) {
                cout << "NO" << endl;
                o = 0;
            return ;
            }
            o = 0;
        }
        else {
            o += 2;
            o -= 1;
        }
    }
    if(o % 2) {
        cout << "NO" << endl;
    return;
    }
    cout << "YES" << endl;
}
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
	return 0;
}
