#include<stdio.h>

int main()
{
	int Cat, Dog, Mouse;
	
	printf ("Enter Cats:\n");
	scanf("%d",&Cat);
	
	printf ("Enter Dogs:\n");
	scanf ("%d",&Dog);
	 
	printf ("Enter Dushi:\n");
	scanf("%d",&Mouse);
	
	
	if (Cat!=Dog)
	{
		
	printf ("catsmouse, Yes\n");
  
			if (Dog==Cat)
			{
				
			printf ("Dogs are not cats, correct\n");
			}
			else 
			printf ("go to hell\n"); //the no. of brackets you open should always be eqaul to the no, of brackets you should close.
	}								//always remember  bracket opened the last will always be closed first.
	
	else 
	{
	
	printf ("Dhushi can be dogs, dogshi\n");
	
		 if (Dog>Mouse)	
		{
		
	 	printf ("Dogs are not mouse, not dogshi\n");
		}
		else 
		
		printf ("dog cat mouse\n");
	}
	
	return 0;
}
