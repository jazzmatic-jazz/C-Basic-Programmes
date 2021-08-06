#include<stdio.h>
#include<string.h>

 int main()
{
    int t; scanf("%d",&t);
	char a[10];
    while(t--)
    	{
    		scanf("%s",a);
    		printf("%ld\n",(a[0]-'0' + a[strlen(a)-1]-'0' ));
    		
    		//" -'0' " subtracts the ascii value of zero(48) from the given one's place integer(should only contain 1 digit)
    	/*   the digits from '0' to '9' are stored sequentially in the ascii code,
			 therefore subtracting the 0's ascii value from the given single digit integer will give the numeric value of integer itself. 
			 for example:- the ascii value of '4' is 52 subtracting the ascii value of '0' which is 48 from 52 will give us the numeric value 4
			 which is equal to the given integer,
			 therefore we use subtraction and not addition of +'0' and also subtraction or addition of any other value will also 
			 NOT result in the same numeric value of the given integer.
 		*/
    	
    	}
	  	
}
