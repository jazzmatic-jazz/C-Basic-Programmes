#include<stdio.h>


	struct abc {
				int x;
				int y;
				};
int main()
{
	struct abc a={0,1};
	struct abc *ptr=&a;// pointer to some variable of type struct abc
	
//	printf ("%d %d",(*ptr).x,(*ptr).y);		
//	printf ("%d %d",(*&a).x,(*&a).y);	
//	printf ("%d %d",a.x,a.y);
	printf ("%d %d",0,1);	

}

