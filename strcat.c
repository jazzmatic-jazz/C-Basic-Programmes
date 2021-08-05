#include <stdio.h>
#include <string.h>
char *strcat(char *dest,const char *src);
char *strcat(char *dest,const char *src)
{
		printf ("%s",dest);
}
int main()
{
	char src[50], dest[50];
	
	strcpy(src,"Hello I am source\n");
	strcpy(dest, "Hello I am destination\n");
	
	strcat(src, dest);
	printf ("%s",dest);
	

}
