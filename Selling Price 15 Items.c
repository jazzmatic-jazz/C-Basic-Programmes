#include<stdio.h>

int main()
{
	int TSP,P,CP;
	
	printf("Enter the Selling Price of 15 items:\n",TSP );	
	scanf ("%d",&TSP);

	printf ("Enter Profit:\n",P);
	scanf ("%d",&P);
	
	CP=(TSP-P)/15;
	
	printf ("Cost price:%d \n",CP); // whenever we are using a variable inside scanf or printf we always need format specifier
									//note that we always use '&' along with format specifier whenever we use a variable in scanf
											
	return 0;
	
}
