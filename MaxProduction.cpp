#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    int method1=x*7;
	    int method2=(y*d)+(z*(7-d));
	    int ans=max(method1,method2);
	    cout<<ans<<endl;
	}
	return 0;
}
