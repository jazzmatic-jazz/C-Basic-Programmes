#include<stdio.h>

int main()
{
	int t, g1,g2,s1,s2,b1,b2;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		t--;
		
		scanf("%d %d %d %d %d %d",&g1,&s1,&b1,&g2,&s2,&b2);
		
		if(g1+s1+b1>g2+s2+b2)
		{
			printf("1\n");
			
		}
		else
		{
			printf("2\n");
		}
		
		
	}
	
}
