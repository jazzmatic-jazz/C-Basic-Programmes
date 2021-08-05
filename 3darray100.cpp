#include <stdio.h>
int main ()
{
	int a[2][5][5];//2*5*5=50
	int i,j,k,v=100;
	
	for (i=0; i<2; i++)
{
		for (j=0; j<5; j++)
	
	{
		for (k=0; k<5; k++)
		{
			a[i][j][k]=v--;
		}
		
			
	}
}	

	for (i=0; i<2; i++)
{
		for (j=0; j<5; j++)
	{
			for (k=0; k<5; k++)
		{
			printf ("%d\t",a[i][j][k]);
		}
			printf("\n");
	}
	    printf ("\n");
}	
	



return 0;
}
