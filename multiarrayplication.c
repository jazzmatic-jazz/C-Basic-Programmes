#include <stdio.h>
int main ()
{
	int a[2][2],b[2][2],c[2][2]={{0,0},{0,0}},i,j,k,r2,c1;
	
	printf ("c1:");
	scanf ("%d",&c1);
	
	printf ("R2:");
	scanf ("%d",&r2);
	
if (c1==r2)
{	

	for (i=0; i<2; i++)
{
		for (j=0; j<2; j++)
	{	
		printf ("Enter for a[%d][%d]:",i,j);
		scanf ("%d",&a[i][j]);
		
	}	
}	
	
	for (i=0; i<2; i++)
{
		for (j=0; j<2; j++)
	{	
		printf ("Enter for b[%d][%d]:",i,j);
		scanf ("%d",&b[i][j]);
		
	}	
	
	
}	
	for (i=0; i<2; i++)
{
		for (j=0; j<2; j++)
	{	
			for (k=0; k<c1 ;k++)
		{	
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				
		}
	}	
	
	
}	
	
		for (i=0; i<2; i++)
{
		for (j=0; j<2; j++)
	{	
				
			printf ("%d ",c[i][j]);
		
	}	
		printf ("\n");
}	

	
}//if
	
	else 
{	printf ("multiplication won't work!!!!");	}	
	
	return 0;
}
