#include <stdio.h>

int main()
{
	int a,b,c,d,e,f;
	
	printf ("enter a,b,c,d,f \n");
	scanf ("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	if(a<b)
	{
		printf("a<b\n");
	}
	else
	{
		if(b>c)
		{
			printf("b>c\n");
		}
		else
		{
			if(d<e)
			{
				printf("d<e\n");
			}
			else
			{
				printf("there's nothing you can do I am also a human\n");
			}
		}
	} 
	return 0;
}

