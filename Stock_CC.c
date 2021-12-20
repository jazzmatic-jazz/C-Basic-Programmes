#include<stdio.h>

int main ()
{
	float s,a,b,c,i,j,z;
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{	
		s=0;a=0;b=0;c=0;
		
		scanf("%f %f %f %f", &s, &a,&b, &c);
		
		s = (s *c) /100+(s);
		
		if (s >= a && s <= b )
		{
			printf("Yes\n");
			
		}
		
		else
		{
			printf("No\n");
		}
		
	}


}
