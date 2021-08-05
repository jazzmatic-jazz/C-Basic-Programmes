#include <stdio.h>
int main()
{
	int no,remno, rvs=0,r,j;
	printf ("Enter the number:\n");
	scanf ("%d",&no);
	
	j=0;
	   
 		if (no!=0)
	{
			r=no%10;
			remno=no/10;
			rvs=rvs*10+r;	
	 printf ("%d\n",rvs);		}
	 
		while (j<4)
{
			if (remno!=0)
		{
			r=remno%10;
			remno=remno/10;
			rvs=rvs*10+r;	}
		
			j++;		
			printf ("Loop is running %d\n",rvs);
}
		if(no==rvs)
		{printf ("It is a a palindrome\n");		}
		else 
		{printf ("Its not");		}
	
	
	
	return 0;
}
