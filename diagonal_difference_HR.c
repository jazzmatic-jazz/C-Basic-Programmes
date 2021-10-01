#include<stdio.h>

int main()
{
	int m,n,i,j,sum1,sum2,diff;
	
	scanf("%d",&n);
	m=n;
	int arr[n][m];
	
	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
/*	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}*/
	sum1=0;
	for (i=0, j=0; i<n; i++,j++)
	{
		sum1=sum1+arr[i][j];
		
	}
//	printf("\n%d",sum1);
	sum2=0;
	
	for(i=0, j=n-1; i<n; i++,j--)
	{
		sum2=sum2+arr[i][j];
	}
	//printf("\n%d",sum2);
	
	diff=abs(sum1-sum2);
	printf("%d",diff);
}
