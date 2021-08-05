#include <stdio.h>

int main()
{
	int i,j,m,n,z=1;
	scanf ("%d%d",&m,&n);
	int arr[m][n];
	
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
		printf ("%d\t",arr[i][j]);	
	}
		printf ("\n");
}
printf ("\n");

{	
	for (i=0;i<n;i++)
	printf ("%d",arr[0][i]); // first row
}

int k=0, l=0; // only runs 1 time

while (k<n )
{// while body	

 	for (i=n-1; k<n;i++)//
{
	printf ("%d",arr[m-1][i]);// col 3-0,2
} 
k++;
}//while body ends

 l=1,k=0;

while (k<2)
{	//2nd while
		
	for (i=2; i<3; i++)
{
	printf ("%d",arr[3-1][l]);// last row -last col
}// for ends
 k++;
 l--; 
  
}// 2nd do body ends

for (i=1; i<3; i++)
{
	printf ("%d",arr[1][i-1]);
}

return 0;
}

