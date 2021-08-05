#include <stdio.h>

int main()
{
	char dhoo[5][10]={"Dhushhi","was","a","good","doggie"};
	
	int i, j,x;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<10; j++)
		{
			scanf ("%c",&dhoo[i][j]);
			
			/*if (dhoo[i][j]=='\n')
			{
				break;
			}
			*/
		}
	}
	
printf ("\n");

		for (i=0; i<5; i++)
	{
		for (j=0; j<10; j++)
		{
			printf ("%c",dhoo[i][j]);
			
		}
		
	}
printf ("\n");
x=strlen(dhoo);
printf ("%d",x);


	
	return 0;
}
