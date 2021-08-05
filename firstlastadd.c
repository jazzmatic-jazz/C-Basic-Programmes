#include<stdio.h>// 4 digit
int main()
{
	int a,rem, last, sum;
	printf ("Enter the number:\n");
	scanf("%d",&a);
	last=a%10;// for remainder which will be our last digit '4'
	rem=a/1000;//1234/10=123	
/*	rem=rem/10;//123/10
	rem=rem/10;//12/10
	rem=rem%10;//1%10=1*/
	
	sum=last+rem;
	
	
	printf ("%d",sum);
	
	return 0;
}
