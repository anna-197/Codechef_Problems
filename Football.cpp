#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	cin>>n;
	int A[n],B[n];
	for(int i=0; i<n; i++)
	{
	    cin>>A[i];
	}
	for(int i=0; i<n; i++)
	{
	    cin>>B[i];
	}
	for(int i=0; i<n; i++)
	{
	    A[i]=A[i]*20;
	}
	for(int i=0; i<n; i++)
	{
	    B[i]=B[i]*10;
	}
	int C[n];
	for(int i=0; i<n; i++)
	{
	    C[i]=A[i]-B[i];
	    if(C[i]<0)
	    {
	        C[i]=0;
	    }
	}
	int maxpoint=C[0];
	for(int i=0; i<n; i++)
	{
	    if(C[i]>maxpoint)
	   {
	        maxpoint=C[i];
	   }
	}
	cout<<maxpoint<<endl;
	}
	return 0;
}