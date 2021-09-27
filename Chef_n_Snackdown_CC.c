#include<stdio.h>
#include<string.h>

int main()
{
	int t,n;
	char nae[10]="NOT HOSTED";
	char yae[6]="HOSTED";
	
	scanf("%d",&t);
	
	while (t>0)
	{
		t--;
		scanf("%d",&n);
		
		if (n==2010 || n==2015 || n==2016 || n==2017 || n==2019)
		{
			puts(yae);
		}
		else
		{
			puts(nae);
		}
	}
	
}
