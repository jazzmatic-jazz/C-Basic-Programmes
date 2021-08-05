#include <stdio.h>

int main()
{
	int n, k,i,j=0,t;
	
	printf("Value of n:");
	scanf("%d",&n);
	printf("Value of k:");
	scanf("%d",&k);
	
	printf("Values of test cases:\n");
	
	for (i=1; i<=n; i++)
	{
		scanf("%d",&t);
		
		if (t%k==0)
		{
			j++;
		}
		
	}
	
	printf("%d",j)	;
	return 0;
}
