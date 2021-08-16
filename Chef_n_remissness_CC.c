#include<stdio.h>

int main()
{
	int t, a, b,sum=0;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&a,&b);
		
		if (a>b)
		{
			sum=a+b;
			printf("%d %d\n",a,sum);
		}
		else if(b>a)
		{
			sum=a+b;
			printf("%d %d\n",b,sum);
		}
		t--;
	}
}
