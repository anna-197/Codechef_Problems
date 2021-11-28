#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a,d;                           // int a[n], d[n];
	    for(int i=0; i<n; i++)
	    {
	        int temp;
            cin>>temp;                               //cin>>a[i];
	        a.push_back(temp);
        }
	    for(int i=0; i<n; i++)
	    {
	        int temp1;
            cin>>temp1;                               //cin>>a[i];
	        d.push_back(temp1);
	    }
	    int defense= -1;
	    int maxdefense= -1;

        for(int i=0; i<n; i++)
	    {
	        if(i==0)
	        {
	            if(d[0]>a[n-1]+a[1])
	            {
	                defense=d.at(0);
	            }
	            
	        }
	        else if(i==n-1)
	        {
	            if(d[n-1]>a[n-2]+a[0])
	            {
	                defense=d.at(n-1);
	            }
	            
	        }
	        else if(d[i]>a[i-1]+a[i+1])
	        {
	            defense=d.at(i);
	        }
	       if(defense>maxdefense)
	       maxdefense=defense;
	    
	    }
	    cout<<maxdefense<<endl;
	    
	}
	return 0;
}