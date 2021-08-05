#include <stdio.h>

int main()
{
	int j;
	
	j=1;
	
	while (j>0)
	{
		printf ( "loop is running %d times:/n",j);
		
	   j=100/2;
		
	
		 
		 
	}
	printf ("The End%d",j);
	
	
	
	
	return 0;
	
}



/*no. of loop	 value of iterating variable  condition to change the iterating variable	iterating variable changed(loop condition will be checked on this value)				
1st loop 		j=100							j=j/2	j=100/2								j=50 condition true
2nd loop 		j=50							j=j/2	j=50/2								j=25 condition true
3rd loop 		j=25							j=j/2	j=25/2								j=12 condition true
4th loop 		j=12							j=j/2	j=12/2								j=6 condition true
5th loop 		j=6								j=j/2	j=6/2								j=3 condition true
6th loop		j=3								j=j/2	j=3/2								j=1 condition true
7th loop		j=1								j=j/2  	j=1/2								j=0	condition false*/

