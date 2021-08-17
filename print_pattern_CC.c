#include<stdio.h>

int main()
{
	int n, i, j,k,x=1;
	scanf("%d",&n);
	int	arr[n][n];
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<=i; j++)
		{
			for (k=i; k>=0; k--,j++)
			{
				arr[j][k]=x++;
			}
		}
	}
	
	for (i=0; i<n; i++)
	{
		for (j=1+i; j<=n-1; j++)
		{
			for (k=n-1; k>i; k--,j++)
			{
				arr[j][k]=x++;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
}
