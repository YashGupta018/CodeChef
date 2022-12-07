#include <iostream>
using namespace std;

void yes() {
    cout << "YES" << endl;
}

void no() {
    cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
        int x1, y1, x2, y2, k;
        cin >> x1 >> y1 >> x2 >> y2 >> k;
        int dist = abs(x2 - x1) + abs(y2 - y1);
        if(dist == k || (dist - k) % 2 == 0 && dist < k)
            yes();
        else if(dist > k)
            no();
        else
            no();
	}
	return 0;
}
