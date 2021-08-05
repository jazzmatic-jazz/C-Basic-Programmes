#include <stdio.h>//A=65

int main()
{	
	int i,j,k;
	char d='A';



	
	for (i=1;i<7;i++)
{		
		for (j=1;j<=8-i;j++)
{	 	printf ("%c ",d);
		printf ("  ");				 				}
		d++;
		
	 		for (j=1;j<=i;j++)
{			printf("  ");	
										 }	 	
	
				for (j=1;j<=8-i;j++)
				printf ("%c ",d);
				printf (" ");
				d++;	
			
							
				printf ("\n");
					
		d--;
	
}	

	
	
	
	
	
	
	
	return 0;
}
