#include<stdio.h>

int main()
{
	int t, d, x, y, z, i, j;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d %d",&d,&x,&y,&z);
		i=0;
		j=0;
		
		i=x*7;
		j=(y*d)+z*(7-d);
		
		if (i>j)
		{
			printf("%d\n",i);
		}
		else
		{
			printf("%d\n",j);
		}
		
		t--;
	}
	
}
