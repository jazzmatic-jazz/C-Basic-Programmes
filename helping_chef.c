#include<stdio.h>
#include<string.h>

int main()
{
	int n, a,i=-1,t;
		
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		
		if( n<10)
		{
			printf("%s\n","Thanks for helping Chef!");
		}
		else
		{
			printf("%d\n",i);
		}
		t--;
	}
	
}
