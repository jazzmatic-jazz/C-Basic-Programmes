#include<stdio.h>


int main()
{
	int t, g, c, r;
	scanf("%d",&t);
	
	while(t>0)
	{	
		r=0;
		scanf("%d %d",&g,&c);
		r=(c*c)/(2*g);
		printf("%d\n",r);
		
		
		t--;
	}
}
