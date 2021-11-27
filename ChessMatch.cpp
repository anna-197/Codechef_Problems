#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    int time=0;
	    int ttime=0;
	    int ans=0;
	    cin>>n>>a>>b;
	    time=2*(180+n);
	    ttime=a+b;
	    ans=time-ttime;
	    cout<<ans<<endl;
	}
	return 0;
}
