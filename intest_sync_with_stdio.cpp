#include <iostream>

using namespace std;
 
int main() {
/**
*to increase cin and cout speed
*/
	std::ios_base::sync_with_stdio(false);
	
	int n,k;
	cin>>n>>k;
	int ctr=0;
	while(n--)
	{
		int num;
		cin>>num;
		if(num%k==0)
			ctr++;
	}
	cout<<ctr<<"\n";
	
	return 0;
} 
