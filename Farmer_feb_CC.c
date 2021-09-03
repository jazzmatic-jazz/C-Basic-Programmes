#include<stdio.h>

int main()
{
	int t,x,y,z, total,j;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&x,&y);
		
		total=0;
		int count=0;
		
		for(z=1; z<=100; z++)
		{
			total=z+y+x;
			printf("value of z:%d\t",z);
			printf("total: %d\n",total);
			
			for(j=1; j<=total; j++)
			{
				if(total%j==0)
				{
					count++;
				}
				
				if (count==2)
				{
					printf("\nz:%d\n",z);
				}
			}
		}
		
		
		t--;
	}
}
