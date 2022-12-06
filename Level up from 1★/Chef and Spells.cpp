#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
        vector <int> v(3);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        cout << v[1] + v[2] << '\n';
	}
	return 0;
}
