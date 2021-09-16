#include<stdio.h>

int main()
{
	int t, x, a, b, res;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d %d",&x,&a,&b);
		res=0;
		res=a+(100-x)*b;
		res=res*10;
		printf("%d\n",res);
		t--;
	}
	
}
