#include <stdio.h>
int main()
{
	int w;
	float i;
	printf("Enter amount to be withdrawn:\n");
	scanf ("%d%f",&w,&i);
	
	
	
	if (w<=i)
{		
	if (w%5==0)
{	i=(i-w)-(0.50);	//use mind
	printf("The amount:%f\n",i);				}
	
	else 
{	printf ("Not Applicable\n",i);			}
}
	
	return 0;
}
