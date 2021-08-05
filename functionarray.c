#include<stdio.h>

int arr(int m, int n);

int arr(int m, int n)// formal parameters
{// function body
	int i,j;
	
	printf ("Enter the value of m and n:\n\n");
//	scanf ("%d%d",&m,&n);
	int b[m][n];
	printf ("Enter the values for indexes:\n\n");
	
	for (i=0; i<m; i++)
{
		for (j=0;j<n; j++)
	{ 
		
		scanf ("%d",&b[i][j]);
	}	
}	
	
	for (i=0; i<m ; i++)
{
		for (j=0; j<n; j++)
	{
		printf ("%d\t",b[i][j]);
	}	
		printf ("\n");
		
}	
	
}//func body end


int main()
{
	int i, j, m, n;
	scanf ("%d%d",&m,&n);
	arr(m,n);// funtion called arr goes to line 7 [m,n actual parameters]-also arguments to the func
	
	return 0;
}

