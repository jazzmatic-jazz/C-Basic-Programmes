#include<stdio.h>

int main()
{
	int p, a, l, b;
	
	scanf("%d",&l);
	scanf("%d",&b);
	
	a=l*b;
	p=2*(l+b);
	
	if (a>p)
	{
		printf("Area\n%d",a);
		
	}
	else if(p>a)
	{
		printf("Peri\n%d",p);
	}
	else if(p==a)
	{
		printf("Eq\n%d",a);
	}
	
}

