#include <iostream>
using namespace std;

    int firstDigit(int n) 
    { 
        while (n >= 10)  
            n /= 10; 
          
       return n; 
    } 
    int lastDigit(int n) 
    { 
        
        return (n % 10); 
    } 
    
    int main() 
    {
        int t;
        cin>>t;
       
    	for(int i=0;i<t;i++)
    	{
    	    int a;
    	    cin>>a;
    	    cout<<firstDigit(a)+lastDigit(a)<<endl;
    	}	
    	return 0;
    }