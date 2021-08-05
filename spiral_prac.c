//SPIRAL MATRIX
#include<stdio.h>

int main()
{
	int i, j, row=0, col=0, z=1,m,n;
	
	scanf("%d %d",&m,&n);
	
	int arr[m][n];
	
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			arr[i][j]=z++;
		}
	}
	
		for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			printf ("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	while(row<m && col<n)
	{
		for(i=col; i<n; i++)
		{
			printf("%d ",arr[row][i]);
		}
		row++;
		printf("\n");
		
		for (j=row; j<m; j++)
		{
			printf("%d ",arr[j][n-1]);
		}
		n--;
		printf("\n");
		if (row<m)
		{
			for (i=n-1; i>=col; i--)
			{
				printf("%d ",arr[m-1][i]);
				
			}
		m--;
		printf("\n");
		}
			
		if (col<n);
		{
			for (j=m-1; j>=row; j--)
			{
				printf("%d",arr[j][col]);
			}
		col++;
		}
		printf("\n");
	
		
	}
	
	
	
}
