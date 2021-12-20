#include<stdio.h>

int main()
{
	int a,b,c,rvs=0;
	printf("Enter the 2 or more digit numbers:\n");
	scanf("%d",&a);
	
	while(rvs!=0)
	{
		b=a%10;
		printf("%d\n",b);
		c=a/10;
		printf("%d\n",c);
		rvs=rvs*10+b;
		printf("rvs %d",rvs);
		
		
	}
	printf("final:%d",rvs);
}
