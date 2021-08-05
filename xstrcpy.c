#include <stdio.h>

char xstrcpy(char*dest,char const *s);
char xstrcpy(char*dest, char const *s)
{
	while (*s!='\0')
	{
		*dest=*s;
		s++;
		dest++;
		
	}
	s=s-10;
	*s='z';// coz of the const
	
	
}

int main()
{
	char s[20]="Jasmine Massey", dest[20];
	
	xstrcpy(dest, s);
	printf ("%s\n",dest);
	printf ("%s",s);
}
