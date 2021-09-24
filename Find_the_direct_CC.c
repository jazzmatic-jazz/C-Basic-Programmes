#include<stdio.h>

int main()
{
	int t,x,z=4,y=1,m=2,u=3,i;
	int n[1000],e[1000],s[1000],w[1000];
	
	scanf("%d",&t);
	
	for (i=0; i<100; i++)
	{	
		n[i]=z;
		printf("%d ",n[i]);
		z=z+4;
	}
	printf("\n");
	for (i=0; i<100; i++)
	{	
		e[i]=y;
		printf("%d ",e[i]);
		y=y+4;
	}
	printf("\n");
	
	for (i=0; i<100; i++)
	{	
		s[i]=m;
		printf("%d ",s[i]);
		m=m+4;
	}
	
	printf("\n");
	
	for (i=0; i<100; i++)
	{	
		w[i]=u;
		printf("%d ",w[i]);
		u=u+4;
	}
	
	while(t>0)
	{
		scanf("%d",&x);
		
		for (i=0; i<100; i++)
		{
			if (x==e[i])
			{
				printf("East\n");
				break;
			}
			
			else if (x==s[i])
			{
				printf("South\n");
				break;
			}
			
				else if (x==w[i])
			{
				printf("West\n");
				break;
			}
			
			else if (x==n[i])
			{
				printf("North\n");
				break;
			}
			
			
		}
		t--;
	}
	
}
