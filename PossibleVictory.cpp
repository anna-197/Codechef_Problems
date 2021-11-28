#include <iostream>
using namespace std;

int main() {
	int r,o,c;
	cin>>r>>o>>c;
	int total_score=c+((20-o)*6*6);
	if(total_score>r)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
	return 0;
}
