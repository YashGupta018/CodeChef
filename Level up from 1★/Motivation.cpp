#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for (int i=0; i<t; i++) {
        int n,x;
        cin>>n>>x;
        int arr[n][2];
        for (int j=0; j<n; j++) {
            cin>> arr[j][0] >>arr[j][1];
        }
        int crr[n][2]={0};
        for (int j=0; j<n; j++) {
            if (arr[j][0]<=x) {
                crr[j][1]=arr[j][1];
                crr[j][0]=arr[j][0];
            }
        }
        int mx=0;
        for (int j=0; j<n; j++) {
            if (crr[j][1]>mx) {
                mx=crr[j][1];
            }
        }
        cout<<mx<<endl;
    }
}