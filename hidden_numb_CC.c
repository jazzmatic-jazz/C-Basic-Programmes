#include<stdio.h>

int main()
{
	int t, n,i,a;
	scanf("%d",&t)	;
	
	while(t>0)
	{
		scanf("%d",&n);
		a=1;
		
		if(a*n==n)
		{
			printf("%d %d\n",a,n);
		}
		
		t--;
	}
	
}
