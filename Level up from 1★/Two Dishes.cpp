#include <iostream>
using namespace std;
int splitTheSum(int N,int K);
int main() {
     int t;
    cin>>t;
    while(t--) {
        int N,K;
        cin>>N>>K;
        int ans= splitTheSum(N,K);
        cout<<ans<<"\n";
    }
}
int splitTheSum(int N,int K) {
        if(N>=K){
            return K;
        }
        int x=K-N;
        return N-x;
}