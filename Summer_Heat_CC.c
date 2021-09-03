#include<stdio.h>

int main()
{
	int t, a, b, xa, xb,d1,d2;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		//d1=0;
		//d2=0;
		
		scanf("%d %d %d %d",&xa,&xb,&a,&b);
		
		d1=a/xa;
		d2=b/xb;
		d1=d1+d2;
		
		printf("%d\n",d1);	
		
		t--;
	}
	
}
