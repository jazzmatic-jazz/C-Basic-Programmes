#include<stdio.h>

int main()
{
	int i,j,n,z=42;
	
	scanf("%d",&n);

for (i=0; i<n; i++)
{
	for (j=0; j<n-i; j++)	
	{
		printf(" ");
	}
		for (j=0; j<=i; j++)
		{
			printf(" %c",z);
						
		}
	printf("\n");
}	

}
