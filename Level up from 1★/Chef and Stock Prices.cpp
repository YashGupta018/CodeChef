#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    double s,a,b,c,p;
	    cin>>s>>a>>b>>c;
	    p=(s*(100+c)/100);
	    if(p>=a && p<=b) {
	        cout<<"Yes"<<endl;
	    }
	    else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
