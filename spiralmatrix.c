#include <stdio.h>

int main()
{
	int i,j;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	for (i=0; i<3; i++)
{
		for (j=0; j<3; j++)
	{
		printf ("%d\t",arr[i][j]);	
	}
		printf ("\n");
}
printf ("\n");

{	
	for (i=0;i<3;i++)
	printf ("%d",arr[0][i]); // first row
}

int k=2, l=3; // only runs 1 time

while (k<3 )
{// while body	

 	for (i=1; i<3; i++)//
{
	printf ("%d",arr[i][l-1]);// col 3-0,2
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

