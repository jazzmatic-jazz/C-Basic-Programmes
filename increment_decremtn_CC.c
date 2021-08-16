#include<stdio.h>

int main()
{
	int n, a;
	
	scanf("%d",&n);
	
	if (n%4==0)
	{
		n=n+1;
		printf("%d",n);
	}
	else
	{
		n=n-1;
		printf("%d",n);
	}
}
