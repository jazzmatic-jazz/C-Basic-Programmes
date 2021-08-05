#include<stdio.h>

int main()
{
	int t, a, b,r;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&a,&b);
		
		r=a%b;
		
		printf("%d\n",r);
		
		t--;
	}
	
}
