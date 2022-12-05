#include <iostream>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {
        int a,b,c;
        cin>>a>>b>>c;
        int sum = b-a;
        cout<<sum/c<<endl;
    }
    return 0;
}