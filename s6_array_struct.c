#include <stdio.h>
struct Book{
			char name[20];
			int volume;
			float rating;
			};
int main()
{
	struct Book b[2];
	int i;
	
	for (i=0; i<2; i++)
	{
		printf ("Enter the name of the book %d:\n",i+1);
		scanf ("%s",&b[i].name);
		printf ("Enter the volumes of the book:\n",i+1);
		scanf ("%f",&b[i].rating);
		printf ("Enter the ratings of the book:\n",i+1);
		scanf ("%d",&b[i].volume);
	}
	printf ("Result is.....\n\n");
	
		for (i=0; i<2; i++)
	{
		printf ("Book %d details:\n",i+1);	
		printf ("Name of the book:%s\n",b[i].name);
		printf ("volumes of the book:%d\n",b[i].volume);
		printf ("Ratings of the book:%.1f\n",b[i].rating);
		
	}
}			
