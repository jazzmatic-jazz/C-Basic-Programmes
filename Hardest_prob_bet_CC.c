#include<stdio.h>

int main()
{
	int t, a, b, c;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d",&a,&b,&c);
		
		if(c<a && c<b)
		{
			printf("Alice\n");
		}
		
		if(b<c && b<a)
		{
			printf("Bob\n");
		}
		if(a<b && a<c)
		{
			printf("Draw\n");
		}
		
		t--;
	}
	
}
