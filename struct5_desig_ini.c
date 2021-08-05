#include <stdio.h>

struct abc {
			int x;
			char *y;
			float z;
		   } ;
int main()
{
	// to access the member in any order
	struct abc a ={.y="Jasmine", .x=25, .z=0.2};
	printf ("%d %s %f", a.x,a.y,a.z);
	return 0 ;
 }		   
 /*typedef struct abc {
			int x;
			char *y;
			float z;
		   } a;
int main()
{
	// to access the member in any order
	a a1={.y="Jasmine", .x=25, .z=0.2};
	printf ("%d %s %f", a1.x,a1.y,a1.z);
	return 0 ;
 }		   */
