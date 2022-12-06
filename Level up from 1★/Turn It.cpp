#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        if (u<=v)
            cout<<"yes"<<endl;
        else if ((v*v)>=(u*u)-(2*a*s))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        }
	return 0;
}
