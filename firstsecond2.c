#include <stdio.h>
int main ()
{
	int no, a, b;
	printf("Enter 5 digit no:\n");
	scanf ("%d",&no);
	
	if (no!=0)
{	a=no%10000;//12345/1000=1		
	printf("First no:%d\n");		}
	
	if (no!=0)
{	b=a%1000;
	printf("Second no:%d\n");		}
	
	if (b!=0)
{	a=b%100;
	printf ("Third No.:%d\n");		}	
	
	if (b!=0)
{	a=a%10;
	printf ("Fourth No.:%d\n");		}
	
	if (no!=0)
{	no=no%10;
	printf ("Fifth no:%d\n");		}
	









return 0;
}
