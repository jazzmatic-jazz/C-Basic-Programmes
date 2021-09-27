#include<stdio.h>

int main()
{
	
	int t, m, h, b;
	scanf("%d",&t);
	
	while(t>0)
	{
		t--;
		b=0;
		scanf("%d %d",&m,&h);
		
		b=m/(h*h);
		
		if(b<=18)
		{
			printf("1\n");
		}
		
		else if(b>=19 && b<=24)
		{
			printf("2\n");
			
		}
		else if(b>=25 && b<=29)
		{
			
			printf("3\n");
		}
		
		else if (b>=30)
		{
			printf("4\n");
		}
		
	}
}
