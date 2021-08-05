#include <stdio.h>

int Matrix(int m, int n);
int main();

int Matrix(int m, int n)
{
	int i, j, z=1;
	int arr[m][n];
	printf ("Your Matrix is :- arr[%d][%d]\n\n",m, n);
	printf ("Matrix initialization...!! \n\n");
	
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			arr[i][j]=z++;
		}
	}
		for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			printf (" %d\t",arr[i][j]);
		}
		printf ("\n");
	}
 
}

int main()
{
	int m, n, l=0;
	char X='e';

	printf("\nIf want to exit press 'e' or type anything:\n");
	scanf (" %c",&X);
	
	while (X!='e')
{
		printf ("Enter the dimensions in m and n:\n");
		scanf("%d%d",&m,&n);
		
		if (m<10 && n<10)
		{
			Matrix(m,n);
			printf("\nIf want to exit press 'e' or type anything:\n");
			scanf (" %c",&X);
		}
		
		else
		{
			printf("ERROR!!...too big try something less than 10X10.\n\n");
			printf("\nIf want to exit press 'e' or type anything:\n");
			scanf (" %c",&X);
		}
		
}	
printf ("EXIT..!!");
	
}  // main body end




