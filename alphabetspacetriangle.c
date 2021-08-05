 #include <stdio.h>

int main() 
{
	int i,j,k=0;
	char d='A',l='G';
	
	
	
	 for (i=1;i<8;i++)//row
{		
		for (j=0;j<8-i;j++)
		{
		
		printf ("%c",d+j);
		}
			
			for (j=1;j<k;j++)
		{
			printf(" ")	;
		}
			k+=2;
			
		if (l=='G')	
		{
			for (j=l-1;j>=d;j--)
		{
			printf ("%c",j);			
		}
		
		}		//if body ends
		else
		{
			for (j=l;j>=d;j--)
		{	
			printf ("%c",j);			
		}	
		}
			l--;			
				
			printf ("\n");
		
			 d='A';
			 
			 
			
}	
return 0;
}
