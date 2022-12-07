#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
        int a,b;
        cin>>a>>b;
        int c = 0;
        for(int i = 2*a; i <= 2*b; i++) {
            c++;
        }
    cout<<c<<endl;
	}
	return 0;
}
