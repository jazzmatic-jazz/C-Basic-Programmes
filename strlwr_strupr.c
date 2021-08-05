#include <stdio.h>
#include <string.h>
//strlwr(string)

int main ()
{
	char string[20];
	printf ("Enter the string:");
	fgets(string,sizeof(string),stdin);
	puts(string);
	printf("Lower case:%s",strlwr(string));
	printf("Upper case:%s",strupr(string));
	int l=strlen(string);
	printf ("Length of the string:%d",l-1);
		
}

