#include <stdio.h>
int main()
{
	int no,a,b;
	printf("Enter your 5 digit no.:\n");
	scanf("%d",&no);
	
 

	if (no!=0)
	{ a=no/10000;//12345/10000=1
	  b=no/10;//12345/10=1234
	  printf ("First digit:%d\n",a);	}
	
	if (b!=0)
	{ a=b%10;//1234%10=4
	  b=b/10;//1234/10=123	
	  printf ("Fourth digit:%d\n",a);	}
	  
	if (b!=0)
	{ a=b%10;//123%10=3
	  b=b/10;//123/10=12
	  printf ("Third Digit:%d\n",a);	}
	  
	if (b!=0)
	{ a=b%10; //12%10=2
	  b=b/10;	
	printf("Second digit:%d\n",a);	}
	
	if (no!=0)
	{ a=no%10;
	  printf ("Last digit:%d\n",a);		}	
	 

	
	return 0;
}
