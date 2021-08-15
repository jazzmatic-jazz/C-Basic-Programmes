#include<stdio.h>

int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d",&a,&b,&c);
		
		if(a>b && a>c)
		{
			if(b>c)
			{
				printf("%d\n",b);
			}
			else
			{
				printf("%d\n",c);
			}
		}
		else if(b>a && b>c)
		{
			if(a>c)
			{
				printf("%d\n",a);
			}
			else
			{
				printf("%d\n",c);
			}
		}
		else if(c>a && c>b)
		{
			if(a>b)
			{
				printf("%d\n",a);
			}
			else
			{
				printf("%d\n",b);
			}
		}
		
		t--;
	}
	
	return 0;
}
