#include<stdio.h>

int main()
{
	int t, n, k,i;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&n, &k);
		int arr[n];
		
		for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
			
			if(k>=arr[i])
			{
				k=k-arr[i];
				printf("1");
				
			}
			else
			{
				printf("0")	;
			}	
		
		}
		printf("\n");
		t--;
	}
	
}
