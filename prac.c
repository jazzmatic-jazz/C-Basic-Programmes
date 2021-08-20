#include<stdio.h>

int main()
{
	double gsal;
	int t, sal;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&sal);
		
		if(sal<1500)
		{
			gsal=sal+(sal*(0.10))+(sal*(0.90));
		}
		else if(sal>=1500)
		{
			gsal=sal+500+(sal*(0.98));
		}
		
		t--;
		printf("%.2lf\n",gsal);
	}
	
}
