#include <stdio.h>
int main ()
{
	int withdraw;
	float balance;
	char a;
	
	
		do
{
		printf ("1.Enter your balance\n2.Enter the amount to be withdrawn\n3.Enter c to continue\n4.Enter e to exit\n");
		
		scanf (" %c",&a);
	
		if (a=='e')
{		printf ("Exit\n\n\n");							}
		
		else if (a=='c')
{		printf ("continue");
		
	 	scanf ("%f%d",&balance,&withdraw);
		if (withdraw%5==0 && withdraw<=balance)
{		balance=balance-withdraw-(0.50);
		printf ("Amount:%f\n",balance);					}
		
	
		else
			{	printf ("Not a multiple of 5 try again");		}					
														}
		else
		{printf("either press c or e\n");
		}
	}
	while (a!='e');
	return 0;
}
