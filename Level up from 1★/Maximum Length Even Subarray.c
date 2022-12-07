#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
        int n;
        cin>>n;
        int count=0;
        for(int i=1;i<=n;i++) {
            if(i%2!=0) {
                count++;
            }
        }
        if(count%2==0) {
            cout<<n<<endl;
        }
        else {
            cout<<n-1<<endl;
        }
	}
	return 0;
}
