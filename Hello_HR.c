#include <stdio.h>
#include <string.h>

int main ()
{
	char ch,s[100],sen[100];
	
	scanf("%c\n",&ch);
	scanf("%s\n", s);
	scanf("%[^\n]s",&sen);
	
	printf ("%c \n",ch);
	printf ("%s\n",s);
	printf ("%s",sen);
	

}
