#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d, c, a1,a2,a3,b1,b2,b3;
	    int delivery=0;
	    cin>>d>>c;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    int total1=a1+a2+a3;
	    int total2=b1+b2+b3;
	    if(total1>=150 && total2>=150)
	    delivery=0;
	    else if(total1<150 && total2<150)
	    delivery=2*d;
	    else delivery=d;
	    int total=total1+total2;
	    if(total+(d*2)>total+c+delivery)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
