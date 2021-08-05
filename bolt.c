#include <stdio.h>
#include <math.h>

int main()
{
	int T;
	float f,distance_to_bolt,tiger_Acc,bolt_speed;
	float Tbolt,Ttiger;
	scanf("%d",&T);
	
	
	while (T--)
{	
	scanf ("%d%d%d%d",&f,&distance_to_bolt,&tiger_Acc,&bolt_speed);
	Tbolt=	f/bolt_speed;
	Ttiger= sqrt((2*(distance_to_bolt+f)/tiger_Acc));			
	
	
	if (Tbolt<Ttiger)
{	printf ("BOlT\n");					}
	
	else  
{	printf ("TIGER\n");					}		
	
}

	
	return 0;
}
