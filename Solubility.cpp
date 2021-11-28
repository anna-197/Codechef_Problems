#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int x,a,b;
         cin>>x>>a>>b;
         int ans=a+(100-x)*b;
         int res=ans*10;
         cout<<res<<endl;
     }
	return 0;
}