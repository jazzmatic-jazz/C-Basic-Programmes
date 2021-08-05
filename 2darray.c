#include <stdio.h>
int main ()
{
	int i,j, user[4][3];	
	
	for (i=0; i<4 ; i++)
{
		for (j=0; j<3; j++)
	{		
		printf ("Enter the values[%d][%d]:",i,j);
		
		scanf ("%d",&user [i][j]);						
	}	
}	
	for (i=0; i<4 ; i++)
{
		for (j=0; j<3 ; j++)
	{		
		printf ("%d ",user[i][j]);
				
	
	}
	
	printf ("\n");
}	
	

	return 0;
}
