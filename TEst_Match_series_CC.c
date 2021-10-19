#include<stdio.h>

int main()
{
	int R1,R2,R3,R4,R5,t,arr[5],i,c1,c2,c3;
	scanf("%d",&t)	;
	
	while(t>0)
	{	
	c1=0;
	c2=0;
	c3=0;
		for (i=0; i<5; i++)
		{
			scanf("%d",&arr[i]);
		}
		for (i=0; i<5; i++)
		{
			if(arr[i]==0)
			{
				c1++;
				//printf("1st: %d\t",c1);
			}
			
			if(arr[i]==1)
			{
				c2++;
				//printf("2nd: %d\t",c2);
			}
			if(arr[i]==2)
			{
				c3++;
				//printf("3rd: %d\t",c3);
			}
		}
		if (c2>c3)
		{
			printf("INDIA\n");
		}
		else if(c3>c2)
		{
			printf("ENGLAND\n");
		}
		else
		{
			printf("DRAW\n");
		}
		t--;
	}
	
}
//scanf("%d %d %d %d %d %d",&R1,&R2,&R3,&R4,&R5 );
