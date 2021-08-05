#include <stdio.h>

int main() 
{
	int i,j,k=0;
	char d='A',l='G';
	
	
	
	 for (i=1;i<=7;i++)//row
{		
		for (j=0;j<=7-i;j++)
		
		
		{printf ("%c",d+j);}
	
			
			for (j=1;j<k;j++)
			{printf(" ")	;	
										}
		if (l=='G')	
		
		{	for (j=l-1;j>=d;j--)
			{printf ("%c",j);			
			 						}		}
		else
		
			{	for (j=l;j>=d;j--)
			{printf ("%c",j);			
			 						}		}
				l--;			
				
			printf ("\n");
		
			 d='A';
			 k+=2;
			 
			
}	
return 0;
}
