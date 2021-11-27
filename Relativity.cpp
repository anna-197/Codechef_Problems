#include <iostream>
using namespace std;

int main() {
        int t;
        cin>>t;
        while(t--){
            int g,c;
            cin>>g>>c;
            int v=c*c;
            
            int h=2*g;
            int ans=v/h;
            cout<<ans<<endl;
        }
	return 0;
}
