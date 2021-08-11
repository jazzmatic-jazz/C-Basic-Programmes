o#include <stdio.h>
//Bubble sorting
int main ()
{
// 				0,1,2,3,4,5,6,7,8,9
    int list[10]={9,8,7,6,5,4,3,2,1,0};
	int i, j, temp;
	
	for (i=0; i<10; i++)
	{
		for (j=0; j<10-i; j++ )
		{
			if (list[j]>list[j+1])
			{
				temp=list[j+1];
				list[j+1]=list[j];
				list[j]=temp;
			}
		}
	}
		for (i=0; i<10; i++)
	{
		printf ("%d",list[i]);
	}
	

}
