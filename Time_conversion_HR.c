#include<stdio.h>
#include<string.h>

int main()
{
	int hh,mm,ss;
	char z[5];
	
	scanf("%d%d%d%s",&hh,&mm,&ss,z);
	printf("%d:%d:%d:%s",hh,mm,ss,z);
}
