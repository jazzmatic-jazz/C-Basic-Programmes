#include <Stdio.h>
int main ()
{
	int i, j, k=0;
	char z='A', y='G';

for (i=1; i<8; i++)
{
	for (j=0; j<8-i; j++)
	{
		printf ("%c",z+j);
	}
	for (j=1; j<k; j++)
	{
		printf (" ");
	}
	k+=2;
	if (y=='G')
	{
		for (j=y-1; j>=z; j--)
		{
			printf ("%c",j);
		}
		
	}
	else 
	{
		for (j=y; j>=z; j--)
		{
			printf ("%c",j);
		}
		
	}
	y--;
	printf ("\n");
	z='A';
}	
	
return 0;	
}
