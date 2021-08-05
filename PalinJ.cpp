#include <stdio.h>
int main()
{
	int no,rvs=0,r,remno;//12321
	printf ("Enter Number:\n");
	scanf ("%d",&no);
	
	if (no!=0)
	 {
	 	r=no%10;//1
	 	remno=no/10;//12321/10=1232
	 	rvs=rvs*10+r;//0*10+1=1 one's place 10power0
	 	printf("%d\n",rvs);
	 	
	 }
		if (remno!=0)
		{
			r=remno%10;//2
			remno=remno/10;//1232/10=123
			rvs=rvs*10+r;//1*10+2=12
			printf ("%d\n",rvs);
			
		}
	
	      if (remno!=0)
	    {
		
	      	r=remno%10;//3
	      	remno=remno/10;//123/10=120
	      	rvs=rvs*10+r;//12*10+3=123
	      	printf ("%d\n",rvs);
	      	
		  }
		  if (remno!=0)
	    {
		
	      	r=remno%10;//2
	      	remno=remno/10;//12/10=1
	      	rvs=rvs*10+r;//123*10+2=1232
	      	printf ("%d\n",rvs);
	      	
		  }
		  if (remno!=0)
	    {
		
	      	r=remno%10;//1
	      	remno=remno/10;//0/10=0
	      	rvs=rvs*10+r;//1232*10+1=12321
	      	printf ("%d\n",rvs);
	      	
		  }
	
	if (rvs==no)
	{printf ("it is a palindrome");	}
	 else
	 {printf ("it is not a palindrome")	; }
      if (rvs!=no)	
	{ printf ("it is not a palindrome");	}
	
	
	return 0;
}
