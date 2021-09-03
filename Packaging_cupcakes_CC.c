#include<stdio.h>

int main()
{
	int t, n,a;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		
		a=(n/2)+1;
		printf("%d\n",a);
		
		t--;
	}
}
