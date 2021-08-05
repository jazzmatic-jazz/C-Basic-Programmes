#include <stdio.h>
//if the cost price and sp of an item is input through the keyboard,
// write a progrm to setermine whether the seller has made profit or incurred loss.
// also determine how much profit he made or loss he incurred.
int main ()
{
	float cp,sp,profit,loss,i;
	
	printf ("Enter the Cost price:\n");
	scanf ("%f",&cp);
	
	printf ("Enter the Selling price:\n");
	scanf ("%f",&sp);
	
	profit=sp-cp;
	loss=cp-sp;
	
	if (sp>cp)
{	printf ("Profit by :%f\n",profit);	}	
	else if (cp>sp)
{	printf ("Loss by:%f\n",loss);	}	
	else
{	printf ("neither profit nor loss");	}
	
return 0;
}
