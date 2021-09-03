#include<stdio.h>

int main()
{
	int n, count=0,i;
	
	scanf("%d",&n);
	
	while(n!=0)
	{
		i=n%10;
		n=n/10;
		count++;
		
	}
	if(count>0 && count<=3)
		{
			printf("%d",count);
		}
		else
		{
			printf("More than 3 digits");
		}
			

}
