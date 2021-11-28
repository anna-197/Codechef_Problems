#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float k1,k2,k3,v;
	    cin>>k1>>k2>>k3>>v;
	    float sum=k1*k2*k3*v;
	    float final=100/sum;
	    final=round(final*100)/100; // here it is for 2 decimal points

if((float)final < (float) 9.58)
  cout<<"YES\n";
else
  cout<<"NO\n"; 
	   // if(setprecision(final)<9.58)
	   // cout<<"YES"<<endl;
	   // else
	   // cout<<"NO"<<endl;
	    
	}
	return 0;
}
