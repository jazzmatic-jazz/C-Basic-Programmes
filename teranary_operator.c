#include <stdio.h>
int main()
{
	int a, b;
	printf ("Enter the value for a nd b:\n");
	scanf ("%d \n%d", &a, &b);
	
	(a>b)? printf ("a is greater than b\n"):printf ("not correct\n");
	(a==b)? printf ("both are same"): printf ("no they are not");
	
}
