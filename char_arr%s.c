#include<stdio.h>

int main ()
{
	char c[3][10]={"Dhushi","is","beautiful"};
	
	int i;
	
	for (i=0; i<3; i++)
	{
		scanf("%s",c[i]);
	}
	
	for (i=0; i<3; i++)
	{
		printf ("%s",c[i]);
	}
	
	return 0;
}
