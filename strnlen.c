#include<stdio.h>
#include <string.h>

int main ()
{
	char a[20];
	int len;
	fgets(a,sizeof(a),stdin);	
	strcpy(a,a);
	
	len=strlen(a);
	printf ("%s%d",a,len-1);
}
