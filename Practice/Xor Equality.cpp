#include<bits/stdc++.h>
#define mod 1000000007
long int arr[100001];
using namespace std;
int main() {
    arr[1]=1;
    for(int i=2;i<100001;i++){
        arr[i]=(arr[i-1]*2)%mod;
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<arr[x]<<endl;
    }
	return 0;
}
