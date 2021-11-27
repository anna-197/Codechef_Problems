#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int maxlen = 0;
	    /*int arr[n];
	    int i, sum=0;
	    for(i=0; i<n; i++){
	        sum=sum+i+1;
	        arr[i]=sum;
	    }
	    if(n==2){
	        cout<<"0";
	    }
	    else if(arr[n-1]%2!=0){
	        cout<<n-1;
	        
	    }
	    else {
	        cout<<i<<endl;
	    }*/
	    int sum = (n*(n+1))/2;
	    if(sum%2==0){
	        maxlen = n;
	    }else{
	        maxlen = n-1;
	    }
	    cout<<maxlen<<endl;
	}
	return 0;
}
