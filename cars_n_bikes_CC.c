#include<stdio.h>

int main()
{
	int t, n;
	char y[5]="Yes";
	char no[5]="No";
	
	scanf("%d",&t);
	
	while(t>0)
	{
		t--;
		scanf("%d",&n);
		
		if (n%4==0)
		{
			puts(no);
		}
		else
		{
			puts(y);
		}
	}
}
