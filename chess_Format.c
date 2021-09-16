#include<stdio.h>

int main()
{
	int a,b,c,t;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&a,&b);
		
		if (a+b<3)
		{	
			printf("1\n");
		}
		
		else if(a+b>=3 && a+b<=10)
		{
			printf("2\n");
		}
		
		else if(a+b>=11 && a+b<=60)
		{
			printf("3\n");
		}
		
		else if(a+b>60)
		{
			printf("4\n");
		}
		t--;
	}
}
