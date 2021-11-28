#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	    {
	        int n,fact=1;
	        cin>>n;
	        for(int i=n; i>=1; i--)
	            {
	               fact=fact*i;
	            }
	        cout<<fact<<endl;     
	    }// your code goes here
	return 0;
}