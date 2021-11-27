#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c, count0=0, count1=0;;
	    cin>>a;
	    if(a==0)
	    count0++;
	    else
	    count1++;
	    cin>>b;
	    if(b==0)
	    count0++;
	    else
	    count1++;
	    cin>>c;
	    if(c==0)
	    count0++;
	    else
	    count1++;
	    if(count0>=1 && count1>=1)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
