#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,x,y;
	    cin>>n>>m>>x>>y;
	    char arr[n][m];
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            cin>>arr[i][j];
	        }
	    }
	    
	   // int resarr[n];
	    for(int i=0; i<n; i++){
	        int countf=0; int countp=0;
	        for(int j=0; j<m; j++){
	            if(arr[i][j]=='F')
	            countf++;
	            if(arr[i][j]=='P')
	            countp++;
	        }
	       // cout<<countf<<endl<<countp<<endl;
	       if(countf>=x || countf==x-1 && countp>=y)
	       cout<<"1";
	       else
	       cout<<"0";
	       
	   //     if(countf<x)
	   //     cout<<"0";
	   //     else if(countf>=x){
	   //         cout<<"1";
	   //    // resarr[i]=1;
	   //     }
	   //     else if(countf==x-1){
	   //         if(countp>=y)
	   //             cout<<"1";
	   //    // resarr[i]=0;
	   //     }
	        
	   }
	    
	    cout<<endl;
	   // cout<<resarr;
	    
	}
	return 0;
}
