#include<stdio.h>

int main()
{
	int n, p1, p2, a=0, b=0,lead1=0, lead2=0;
	
	scanf("%d",&n);
	
	while(n>0)
	{
		scanf("%d %d", &p1,&p2);
		
		a=a+p1;
		b=b+p2;
		
		if (a>b)
		{
			if ((a-b)>lead1)
			
			lead1=a-b;
			
		}
		else
		{
			if((b-a)>lead2)
			lead2=b-a;
		}
	
		
		n--;
	}
	if (lead1>lead2)
	{
		printf("1 %d",lead1);
	}
	else
	{
		printf("2 %d",lead2);
	}
	
}
