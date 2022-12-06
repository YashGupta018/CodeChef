#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
        int spell[3];
        for(int i=0; i<3; i++)
        cin>>spell[i];
        sort(spell, spell+3);
        cout<<spell[1] + spell[2]<<endl;
	}
	return 0;
}