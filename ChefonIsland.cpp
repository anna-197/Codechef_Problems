#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,xn,yn, d;
        cin>>x>>y>>xn>>yn>>d;
        if(min((x/xn),(y/yn))>=d)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
