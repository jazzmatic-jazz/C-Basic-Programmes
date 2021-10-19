#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000],space=32;
	int l,i;
	
	scanf("%[^\n]",&s);
	l=strlen(s);
	printf("%d",l);
	s[l];
	
	
	while (s[l]!=NULL)
	{
		for (i=0; i<l; i++)
		{
			printf("%c",&s[i]);
			
			
		}
	}
	
	
	

}	











/*scanf("%[^\n]",&s);
	printf("%c",s);
	
	while(s[]!=NULL)
	{
		printf("%s",s);
		s[1000]++;
	}*/
	
