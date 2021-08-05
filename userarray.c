#include <stdio.h>
int main()
{

	int m,n,i,j,k=1;
	
	 scanf ("%d%d",&m,&n);
	
	 	int a [m][n];
	 
	 for (i=0;i<m;i++)
{
		for (j=0;j<n;j++)
	{
		a[i][j]=k++;// initializing	
	}	
		
} 
	
	for (i=0;i<m;i++)
{
		for (j=0;j<n;j++)
	{
	
		printf ("%d\t",a[i][j]);
	}	
		printf("\n");
} 	
	return 0;
}
