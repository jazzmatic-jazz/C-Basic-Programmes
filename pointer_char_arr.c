#include<stdio.h>
#include<string.h>

int main()
{
	char *ptr[10];
	char c[10];
	
	int i,z;
	
	for (i=0; i<10; i++)
	{
		fgets(c,sizeof(c),stdin);
		z=strlen(c);
		
		char *p= (char*)malloc(z+1);
		
		strcpy(p,c); // only addresses
		
		ptr[i]=p;
		
	}
	
	for (i=0; i<10; i++)
	{
		printf("%c\n",*ptr[i]);
	}
	
}
