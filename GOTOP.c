#include<stdio.h>
int main ()
{ 	int goal;
	scanf("%d",&goal);
	
	if(goal>=5)
	{ 	
		goto win; 
		goto ok; 
	} 	 
		else 
		
	{	 		
	ok : printf("India has lost the match"); 
	}
 	win :printf("India has won the match"); 
	scanf("%d",&goal);
	if(goal>=15)
	printf("noob"); }
