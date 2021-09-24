#include<stdio.h>

int main()
{
	int t, r;
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&r);
		
		if (r>=2000)
		{
			printf("1\n");
			
		}
		
		else if (r<2000 && r>=1600)
		{
			printf("2\n");
		}
		
		else if(r<1600)
		{
			printf("3\n");
		}
		
		t--;
		
	}	
}
