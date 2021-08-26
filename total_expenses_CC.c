#include<stdio.h>

int main()
{
	int t;
	double c,n=0.10,b,a, q,p;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%lf %lf",&q, &p);
		a=0.0;
		c=0.0;
		b=0.0;
		if(q>1000)
		{
			a=q*p;
			b=a*n;
			c=a-b;
			printf("%lf\n",c);
		}
		else
		{
			c=q*p;
			printf("%lf\n",c);
		}
		t--;
	}
	
}
