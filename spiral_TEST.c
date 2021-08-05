#include<stdio.h>
int main()
{
	int i, j, row=0,col=0, m, n, z=1;
	
	printf ("enter the dimensions of array m and n. \n");
	scanf ("%d%d",&m,&n);
	int arr[m][n];
	printf ("arr[%d][%d]\n", m, n);

printf ("\n")	;

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
	printf ("\n");
}
printf ("\n")	;

//spiral matrix
while (row<m && col<n)
{
	for (i=col; i<n; i++)
	{
		printf (" %d",arr[row][i]);
	}
	row++;
	
	for (i=row; i<m; i++)
	{
		printf (" %d", arr[i][n-1]);
	}
	n--;
	
	if (row <m)
	{
		for (i=n-1; i>=col; i--)
		{
			printf (" %d",arr[m-1][i]);
		}
		m--;
	}
	
	if (col<n)
	{
		for (i=m-1; i>=row; i--)
		{
			printf (" %d",arr[i][col]);
		}
		col++;
	}
}//while body end

}//main body
