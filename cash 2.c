include <stdio.h>

int main()
{
	int amount,no_of_notes,remainder;
	
	scanf ("%d",&amount);
	
	no_of_notes=amount;
	 
	no_of_notes=no_of_notes/100;
	printf ("\ncalculation of 100 notes: %d",no_of_notes);
	remainder=amount%100;
	
	no_of_notes=remainder/50;
	printf ("\ncalcution of 50 notes: %d",no_of_notes);
	remainder=remainder%50;
	
	no_of_notes=remainder/10;
	printf ("\ncalculation of 10 notes : %d",no_of_notes);
	remainder=remainder%10;
	
	printf ("\ncalculation of remaining money : %d",remainder);

	return 0;

