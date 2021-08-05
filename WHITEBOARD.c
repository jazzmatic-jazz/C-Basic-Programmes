#include<stdio.h>

int main()
{
	int x;
	float y,c=0.50;
	
	scanf("%d %f",&x,&y);
	
	if (x+c<=y)
	{
		if (x%5==0)
		{
			y=(y-x)-(c);
		
		}
		
	}
	
		printf("%.2f",y);
	
	return 0;
}
