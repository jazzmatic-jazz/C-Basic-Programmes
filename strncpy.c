#include <stdio.h>
#include <string.h>
//char *strncpy(char *dest, const char *src, size_t n)

int main ()
{
	char dest [50]="Hello, my is Dhushi with two eyes";
	char src[20];

	strncpy(src,dest,7)	;
	
	printf("%s\n",src);
	printf ("%s",dest);
}

