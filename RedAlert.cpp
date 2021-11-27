#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,d,h,flag=0;
	    cin>>n>>d>>h;
	    int arr[n]; int resarr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int wl=0;
	    for(int i=0; i<n; i++){
	        if(arr[i]>0){
	            wl += arr[i];
	        } else {
	            wl -= d;
	        }
	        
	        if (wl < 0) {
	            wl = 0;
	        }
	        
	       // resarr[i]=wl;
	        if(wl > h) flag = 1;  
	    }
	   // for(int i=0; i<n; i++){
	   //     if(resarr[i]>h){
	   //         flag=1;
	   //         break;
	   //     }
	   // }
	    if(!flag) cout<<"NO"<<endl;
	        else  cout<<"YES"<<endl;
	    
	}
	return 0;
}
