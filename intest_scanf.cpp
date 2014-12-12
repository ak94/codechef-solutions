#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,m,count=0;
	/**
	* taking input
	*/
	scanf("%d%d",&n,&k);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&m);
		if (m%k==0)
		{
			count++;
		}
 
	}
	
	/**
	*giving output
	*/
			printf("%d",count );
	return 0;
} 
