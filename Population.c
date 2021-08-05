#include <stdio.h>
 
 int main ()
 {
 	int total_population=80000, Total_literate,Men, Women, I_Men, I_Women,L_Men, L_Women;
 	printf (" Population of town: %d \n",total_population);
 	printf("total literacy:%d\n",Total_literate=80000*(48.0/100));
 	
 	Men= 80000*(52.0/100);
 	printf("total men: %d\n",Men );
 	
 	Women= 80000-Men;
 	printf("Total women: %d\n",Women);
 	
 	L_Men= total_population*35.0/100;
 	printf("Literate men: %d\n",L_Men);
 	
 	I_Men= Men-L_Men;
 	printf("Total illiterate men:%d\n",I_Men);
 	
 	L_Women= 80000*(48.0/100)-(total_population*(35.0/100));
 	printf("Total literate women: %d\n",L_Women);
 	
 	I_Women=(80000-Men)-(L_Women);
 	printf ("Total of illiterate women:%d \n",I_Women); 	
 	
 	return 0;
 }
