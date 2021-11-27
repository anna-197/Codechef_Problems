#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int max=0;
	    int sum1=a+b;
	    if(sum1>max)
	    max=sum1;
	    int sum2=c+b;
	    if(sum2>max)
	    max=sum2;
	    int sum3=c+a;
	    if(sum3>max)
	    max=sum3;
	    cout<<max<<endl;
	}
	return 0;
}
