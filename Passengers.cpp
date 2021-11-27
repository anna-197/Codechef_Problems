#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,m,q;
	    cin>>n>>m>>q;
	    char sign; int j;
	    int flag=0;
	    map<int,int> mp;
	    for(int i=0; i<q; i++){
	       // cout<<"FLAG: "<<flag<<endl;
	       // if(flag==-1){
	       //     break;
	       // }
	        
	        cin>>sign>>j;
	        
	            if(sign=='+'){
	                mp.insert(make_pair((j),1));
	               // cout <<"map size: "<<mp.size()<<" m: "<<m<<endl;
	                if(mp.size()>m){
	                    flag=-1;
	                }
	                
	            }     
	            
	            else if(sign=='-'){
	                
	                if(mp.find(j)!=mp.end()){
	                    mp.erase(j);
	                }
	                else{
	                    flag=-1;
	                }
	                
	            }
	        }
	        if(flag==-1)
	        cout<<"Inconsistent"<<endl;
	        else
	        cout<<"Consistent"<<endl;
	    }
	    
	    
	    return 0;
	}
	

