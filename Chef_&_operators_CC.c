#include<stdio.h>

int main()
{
	int t, a, b;
	char l=60 , g=62, e=61;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&a,&b);
		
		if(a>b)
		{
			printf("%c\n",g);
		}
		
		else if(a<b)
		{
			printf("%c\n",l);
		}
		
		else if(a==b)
		{
			printf("%c\n",e);
		}
		t--;
	}
	
}
