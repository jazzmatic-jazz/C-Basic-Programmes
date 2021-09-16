#include<stdio.h>

int prime(int num);

int main()
{
	int num=2,x; 
	
	for(num=2; num<20; num++)
	{
		prime(num);
		//printf("value of x:%d\n",x);
	
	}
	
}

int prime(int num)
{
	int i=1,	count=0;
	
	while(i<=num)
	{
		if(num%i==0)
		{
			count++;
			//printf("count: %d\t number:%d\n",count,num);
			
		}
		i++;	
	
	}
		if (count==2)
		{
			printf("number in count:%d\t",num);
			return num;
		}
		else
		{
			return 0;
		}
	
	
	
	
}
