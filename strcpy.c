#include <stdio.h>
#include <string.h>
char *strcpy (char *dest, const char *src);
char *strcpy (char *dest, const char *src)

{
	puts(src);
}
int main ()
{
	char dest[20]="Dhushi Dhoo";
	char src[20];
	
	strcpy(src,dest); //empty string comes first then the content one
	
}
