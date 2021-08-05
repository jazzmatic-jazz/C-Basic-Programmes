#include <stdio.h>
#include<string.h>
int main()
{
	int i, j, k, t,z;
	char s[10000];
	
	scanf("%d",&t);
	
for (i=0; i<t; i++)
{
	scanf("%s",&s);
	z=strlen(s);
	
	for(j=0; j<z; j++)
	{
		if (j%2==0)
		{
			printf("%c",s[j]);
		}
		
	}

printf(" ");
		
	for(k=1; k<z; k++)
	{
		if (k%2!=0)
		{
			printf("%c",s[k]);
		}
	}
	printf("\n");
}	
	
	
}
