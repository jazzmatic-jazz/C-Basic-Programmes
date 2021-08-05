#include <stdio.h>
int main()
{
	int a,Cel;
	printf("Enter the temperature in F:\n");
	scanf ("%d",&a);
	
	Cel=((a-32)/1.8);

	
	printf ("Celcius:%d",Cel);
	
	return 0;
}
