#include <stdio.h>

int main()
{
	int amount;
	scanf ("%d",&amount);
	amount=amount/100; 
	printf ("\ncalculation of 100 notes: %d",amount );
	printf ("\ncalcution of 50 notes: %d",amount/50);
	printf ("\ncalculation of 10 notes : %d",(((amount%100)%50)/10));
	printf ("\ncalculation of remaining money : %d",(((amount%100)%50)%10));

	return 0;
	
}
