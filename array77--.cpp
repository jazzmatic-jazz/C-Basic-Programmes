#include <stdio.h>
int main ()
{
	int o,p, m,n,i,j,z=77,k;
	char X;
		
	printf ("Enter the value of n and m:\n");
	scanf ("%d%d",&m,&n);// declararion done by user
	int a[m][n];
	printf ("Enter the value of n and m of b:\n");
	scanf("%d%d",&o,&p);
	
	int b[o][p];

	for (i=0; i<m ; i++)
{
		for (j=0; j<n ; j++)
	{
		a[i][j]=z++; // initializing of a
	}	
}	
	printf ("\n");
	
	for (i=0; i<m ; i++)
{
		for (j=0; j<n ; j++)
	{
		printf ("%d\t",a[i][j]);
	}	
		printf ("\n");
}	
	printf ("\n");
	
	for (i=0; i<o ; i++)
{
		for (j=0; j<p ; j++)
	{
		b[i][j]=z++;// initializing of b
	}	
}		

	for (i=0; i<o ; i++)
{
		for (j=0; j<p ; j++)
	{
		printf ("%d\t",b[i][j]);
	}	
		printf ("\n");
}	

	printf ("to initialize the array press C\n");
	scanf (" %c",&X);
	if (X=='C')
{	//if body

		for (i=0; i<m ; i++)
{
		for (j=0; j<n ; j++)
	{
		scanf ("%d",&a[i][j]);		// initializing of a by user
	}	
}	
	printf ("\n");

	for (i=0; i<m ; i++)
{
		for (j=0; j<n ; j++)
	{
		printf ("%d\t",a[i][j]);
	}	
		printf ("\n");
}	
	
	
	for (i=0; i<o ; i++)
{
		for (j=0; j<p ; j++)
	{
		scanf ("%d",&b[i][j]);// initializing of b by user
	}	
}		

	for (i=0; i<o ; i++)
{
		for (j=0; j<p ; j++)
	{
		printf ("%d\t",b[i][j]);
	}	
		printf ("\n");
}	

}	// if body ends

// multiplication normally
	int c[m][p];
	
	for (i=0; i<m ; i++)
{
		for (j=0; j<p ; j++)
	{
		c[i][j]=0; // initializing of c
	}	
}	
		
	for (i=0; i<m; i++)
{
		for (j=0; j<p; j++)
	{	
			for (k=0; k<n ;k++)
		{	
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				
		}
	}	
	
	
}	

		for (i=0; i<m; i++)
{
		for (j=0; j<p; j++)
	{	
				
			printf ("%d\t",c[i][j]);
		
	}	
		printf ("\n");
}	


return 0;
}
