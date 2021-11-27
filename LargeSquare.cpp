#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    double root=sqrt(n);
	    double result=floor(root);
	    int ans=result*a;
	    cout<<ans<<endl;
	    
	}
	return 0;
}
