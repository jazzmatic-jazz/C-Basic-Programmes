#include <stdio.h>

int main ()
{
    int j, p;
	
	printf (" How many time the loop will run:\n");
	scanf("%d",&p);
	j=0;// aasignment statement
	
		while (j<p)
	{
	   	printf (" the loop will run %d times\n",j);
	   	
	   	j++;
	   	printf ("Users %d",j);
	
	}	
	
	return 0;
}
