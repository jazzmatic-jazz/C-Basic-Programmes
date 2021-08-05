#include <stdio.h>
#include <string.h>
//int strcmp(const char *dest,const char *src)
int main()
{
	char a[]="abcd", b[]="ABCD", c[]="abcd";
	int result;
	
	result= strcmp(a,b);
	printf("For a and b:%d\n",result);
	
	result =strcmp (a,c);
	printf ("For b and c:%d",result);
	
	char *fruits[]={"2 Oranges","2 Apples","3 Bananas", "1 Pineapple"};
	if  (strcmp(fruits[1],fruits[2])<0)
	printf ("\n%s are lesser than %s\n", fruits[1], fruits[2]);
	else if (strcmp(fruits[1],fruits[2])>0)
	printf ("%s are greater than %s", fruits[1], fruits[2]);
}
