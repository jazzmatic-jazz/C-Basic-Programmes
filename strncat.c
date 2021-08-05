#include <stdio.h>
#include <string.h>
char *strncat (char *dest, const char *src, size_t n);
char *strncat (char *dest, const char *src, size_t n)
{
	printf ("%s",dest);
}
int main()
{
	char dest[50], src[50];
	int l;
	
	strcpy(src,"Hello My name is Jasmine\n");
	strcpy(dest,"Massey\n");
	l=strlen(src);
	
	printf ("%d",l);
	strncat(dest,src,2);
	
}
