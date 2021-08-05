#include <stdio.h>

int main()

{
	int a[10],i,j,swap;
	 
	for (i=0; i<10; i++)
	{
		scanf("%d",&a[i]);

	}
	
	for (i=0; i<10; i++)
	{
		printf("%d",a[i]);

	}
	
		for (i=0; i<10; i++)
	{
			for (j=0; j<10-i-1; j++)
			{
				if (a[j]>a[j+1])
				{
					swap=a[j+1];
					a[j+1]=a[j];
					a[j]=swap;
					
				}
			}
	}
	print("\n")	;
	for (i=0; i<10; i++)
	{
		printf("%d",a[i]);

	}
}
