# include <stdio.h>
int main()
{
	int i,j,m,n, row=0,col=0,z=1;
	printf ("Enter the value of m and n:\n");
	scanf ("%d%d",&m,&n);
	int a[m][n];
// initializing of array	
for (i=0; i<m; i++)
{
	for (j=0; j<n; j++)
	{
		a[i][j]=z++;
	}
	
}	
//printing the array
for (i=0; i<m; i++)
{
	for (j=0; j<n; j++)
	{
		printf ("%d\t",a[i][j]);
	}
	printf ("\n");
}		
printf ("\n");
//spiral matrix
while(row<m && col<n)
{// first row printing
	for (i=col; i<n; i++)//  cols are changing
	{
		printf ("%d",a[row][i]);//row is constant row=0
		
	}
	row++;// we dont want the first row again
	
	for (i=row; i<m; i++)
	{
		printf ("%d",a[i][n-1]); // for the last col
	}
	n--;// we dont need that col again
	
	if (row<m)
	{
		for (i=n-1; i>=col; i--)
		{
			printf ("%d",a[m-1][i]);
		}
		m--;
	}
	
	if (col<n)
	{
		for (i=m-1; i>=row; i--)
		{
			printf ("%d",a[i][col]);
		}
		col++;
	}	
	
}


	return 0;
}
