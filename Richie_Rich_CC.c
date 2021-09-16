#include<stdio.h>

int main()
{
	int t, a, b, x, i, j;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d",&a,&b,&x);
		i=0; j=0;
		i=b-a;
		j=i/x;
		
		printf("%d\n",j);
		t--;
	}
}
