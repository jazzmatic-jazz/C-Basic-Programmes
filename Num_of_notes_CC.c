#include<stdio.h>

int main()
{
	int n, t, notes, rem,m;
		
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d",&n);
		notes=n;
		
		notes=notes/100;
		rem=n%100;
		m=notes;
		
		notes=rem/50;
		rem=rem%50;
		m=m+notes;
		
		notes=rem/10;
		rem=rem%10;
		m=m+notes;
		
		notes=rem/5;
		rem=rem%5;
		m=m+notes;
		
		notes=rem/2;
		rem=rem%2;
		m=m+notes;
		
		notes=rem/1;
		m=m+notes;
		
		printf("%d\n",m);
		
		
		t--;
	}
	
	
}
