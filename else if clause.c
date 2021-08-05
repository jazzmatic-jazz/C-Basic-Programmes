#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("Enter numbers:\n");
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	
	if(a<b)
  
  
	{ printf( "a is small\n");
	}	
	else if (b>c)
	{ printf ("b cant be c");
	}
	else if(d<e)
	{ printf ("both are same");
	}
/*	else if (a>=d)
	{ printf ("e and d");
	}*/

     else
     printf ("everything is different");
     

	return 0;
}
