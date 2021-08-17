#include<stdio.h>

int main()
{
	int p,t,y=2,i,j;
	int menu[12];
	menu[0]=1;
	
	
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&p);
		for(i=1; i<12; i++)
		{
			j=j*y;
			menu[i]=j;
			
			if (p==menu[i])
		{
			printf("1");
		}	
		
		}
		
		
		t--;
	}
	
}
