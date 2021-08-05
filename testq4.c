#include<stdio.h>
int main()
{
	int i, j, a=1;
	
	for (i=1; i<5; i++)
{
	for (j=0; j<5-i; j++)
	{
		printf (" ");
	}
	for (j=0; j<i; j++)
	{
		printf("%s%d"," ",a);
		a+=1;
	}
	
	printf("\n");
}	
	
	return 0;
}
