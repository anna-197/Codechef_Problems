#include <iostream>
using namespace std;

int main() 
{
    long t,n;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        long rev=0;
        while(n>0) 
        {
            rev=rev*10;
            rev=rev+(n%10);
            n=n/10;
        }
        cout<<rev<<endl;
    }
    return 0;

}