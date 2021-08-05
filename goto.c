#include <stdio.h>
int main ()
{
	int j;
	scanf ("%d",&j);
	

	if (j>=5)
{	goto pass;			}
	
	else
{	goto fail;				}	

	pass:
		printf ("work\n");
	
	fail:
		printf ("get lost")	;
	
	
	
	return 0;
}
