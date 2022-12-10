#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int nt;
	cin>>nt;
	while(nt--) {
        long long int D,d,p,q;
        cin>>D>>d>>p>>q;
        int n=D/d;
        long long int money=p*d*n+(q*(n-1)*d*n)/2;
        long long int rem=D%d;
        money+=rem*(p+n*q);
        cout<<money<<endl;
	}
	return 0;
}
