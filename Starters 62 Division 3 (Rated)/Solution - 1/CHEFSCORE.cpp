#include <iostream>
using namespace std;
int main() {
 // your code goes here
 int a;
 cin >> a;
 while(a--) {
     int b, c, d;
     cin >> b >> c >> d;
	 if(d % c == 0) {
		cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
			}
		}
	return 0;
}