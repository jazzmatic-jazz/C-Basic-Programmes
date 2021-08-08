#include <stdio.h>

int main()
{
	int t, n, i=0;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		i=n;
		 
		while(i>1)
		 {
		 	if (i==n)
		 	{
		 		n=n*(i-1);
		 		i--;
				 	
			}
			else
			{
				n=n*(i-1);
				i--;
			}
		 }
		
		printf("%d\n",n);
		t--;	 
	}
	
	return 0;
	
}
