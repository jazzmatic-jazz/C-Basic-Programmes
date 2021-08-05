#include<stdio.h>
int main()
{
	int i, j, k, c1,r2, z=100, y=0;
	int a[3][2], b[2][4], c[3][4];
	
	printf ("Column 1:\n");
	scanf ("%d",&c1);
	printf ("Row 1:\n");
	scanf ("%d",&r2);
	
	if (c1==r2)
{// first a[3][2]- assignment

	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{
			a[i][j]=z--;
		}
	}
printf ("\n");

	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{
			printf ("%d\t",a[i][j]);
		}
			printf ("\n");
	}
printf ("\n")	;
//b[2][4] assign

	for (i=0; i<2; i++)
	{
		for (j=0; j<4; j++)
		{
			printf ("b[%d][%d]: \n",i, j);
			scanf ("%d",&b[i][j]);
		}
	}
	
		for (i=0; i<2; i++)
	{
		for (j=0; j<4; j++)
		{
			printf ("%d\t",b[i][j]);
		}
		printf ("\n");
	}
printf ("\n")	;
	
//multiplication of 2 matrices
		for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			c[i][j]=y;
		}
	}
	
		for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			printf ("%d\t",c[i][j]);
		}
			printf ("\n");
	}
printf ("\n")	;
	

	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			for (k=0; k<c1; k++)		
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}	
		}
	}
printf ("Multiplication of matrices....!!\n\n");

		for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			printf ("%d\t",c[i][j]);
		}
		printf ("\n");
	}	
	
}//if body ends

	else
{
	printf ("Multiplication cannot be performed.");
}	
return 0;
}
