#include <iostream>
using namespace std;
int main() {
	// your code goes here
    int t;
    cin>>t;
    int a,c,b;
    while(t--) {
        cin>>a>>b>>c;
        if(a+b+c==180){
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}