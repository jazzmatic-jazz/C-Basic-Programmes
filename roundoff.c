#include <stdio.h>
//10.25 17 5
int main()
{
	int total;
	double meal,cost,tip, tax;
	
	scanf("%lf",&meal);
	scanf("%lf\n%lf",&tip, &tax);
	
	tip=meal*tip/100;
	tax=meal*tax/100;
	//cost= meal+((tip/100)*meal)+((tax/100)*meal);
	//printf ("%.2lf\n",cost);
	
	total=round(meal+tip+tax);
	printf("%d",total);
	
	
	
	
	
	return 0;
}
