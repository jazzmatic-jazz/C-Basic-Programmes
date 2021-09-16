#include<stdio.h>

int main()
{
	int t, x ,m, d, e,f;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d",&x,&m,&d);
		e=0;
		e=m*x;
		f=0;
		f=x+d;
		
		if (e>f)
		{
			printf("%d\n",f);
			
		}
		else if(f>e)
		{
			printf("%d\n",e);
		}
		else
		{
			printf("%d\n",e);
		}
		
		t--;
	}
	
	
}
