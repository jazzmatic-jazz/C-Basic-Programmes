#include <stdio.h>
int main ()
{
	int a=1,i,j;
	
	for (i=1;i<5;i++)
{
		for (j=1;j<5-i;j++)
	{	
		printf ("  ");	
	}
			
		for (j=1;j<=i;j++)
	{	
			printf ("  %d%s",a," ");
			a++;				
	}
				
		printf ("\n");
	
}	
	
	
	return 0;
}
