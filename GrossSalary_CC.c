#include <stdio.h>
int main()
{
	int t,salary;
	float gsal,h,d;
	
	scanf ("%d",&t);
	
	while (t--)
	{
		scanf ("%d",&salary);
		
		if (salary<1500)
		{
			gsal=salary+(salary*(0.10))+(salary*(0.90));
				
			
		}
		
		
		else
		{
			gsal=salary+500+(salary*(0.98));
			
		}	
			printf ("%f",gsal);
	}
	
	
	
	
	return 0;
}
