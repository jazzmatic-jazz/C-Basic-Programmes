#include<stdio.h>

int main()
{
	int t, a, b, gcd, lcm,i;
	scanf("%d",&t);
	
	while(t>0)
	{   
	    gcd=0;
	    lcm=0;
		scanf("%d %d",&a,&b);
		
		for (i=1; i<=a && i<=b; i++)
		{
			if (a%i==0 && b%i==0)
			{
				gcd=i;	
			}
		}
		lcm=(a*b)/gcd;
		
		printf("%d %d\n",gcd,lcm);
		t--;
	}
}


