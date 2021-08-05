#include <stdio.h>

int main()
{
	int arr[2][2]={{1,0},{1,1}}, array [2][2]={{2,1},{2,3}}, sum[2][2], i,j;
	
	for (i=0; i<2; i++)
{
		for (j=0; j<2; j++)
	{	
		sum[i][j]=arr[i][j]+array[i][j];
		
	}
			
}	
	
	
		for (i=0; i<2; i++)
{
		for (j=0; j<2; j++)
	{	
		printf ("%d",sum[i][j]);
		
	}
			printf ("\n");
}	
	
	
	return 0;
}
