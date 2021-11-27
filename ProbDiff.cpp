#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int arr[4];  int arrcount[4];
	    
	    for(int i=0; i<4; i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<4; i++){
	        int count=1;
	        for(int j=0; j<4; j++){
	            if(i!=j && arr[i]==arr[j])
	            count++;
	        }
	        arrcount[i]=count;
	    }
	    int max=0;
    	for(int i=0; i<4; i++){
    	    if(arrcount[i]>max)
    	    max=arrcount[i];
    	}
    	if(max==4)
    	cout<<"0"<<endl;
    	else if(max==3)
    	cout<<"1"<<endl;
    	else
    	cout<<"2"<<endl;
	}	    
	return 0;
}
