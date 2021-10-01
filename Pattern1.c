#include <stdio.h>

int main() 
{
	int i,j,k;
	
	
	 for (i=1;i<=10;i++)//row
{	
		for (j=1;j<=10-i;j++)// for right angled triangle j<=10-9
		
		{
			printf (" ");
		}
		
			for (j=1;j<=i;j++)
			{
				printf(" *")	;	
			}
		
	printf ("\n");				
		
}	
	
	for (i=1;i<=4;i++)
{
	for (j=1;j<=5;j++)
	{printf (" ");					}
				
		
		for (j=1;j<=1;j++)
		{printf ("  |     |\n");		}
			if (i==4)
			{printf ("       |_____|")	;		}
		
		
}	
	
	
	
return 0;
}
   
