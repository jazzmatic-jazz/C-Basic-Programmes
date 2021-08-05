#include <stdio.h>
int main ()
{
	int withdraw,i;
	float balance;
	char a,e,c;
	
	a=='e';
	a=='c';
	

	printf ("Press '1'for the amount entered .\nPress '2' for the remaining balance in account.\nPress 'e' to exit.\nPress 'c' to continue.\n\n");	

	switch (a)
{	
	
	case 'c': printf ("To continue with the payments");// could be used as a condition
	
}
	printf ("Enter the available balance:\n");
	scanf ("%f",&balance);
	
	printf ("Enter the amount to be withdrawn:\n");
	scanf ("%d",&withdraw);
	
	balance=(balance-withdraw)-(0.50);
		
	scanf ("%d",&i);
	
	
	
	switch (i)`
{	
	
	case 1: printf ("Balance remaining in account:%f\n",balance);
	break;
	
	case 2: printf ("Amount entered to verify:%d",withdraw);
	break;	
	
}
	return 0;
}
