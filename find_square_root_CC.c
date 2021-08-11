#include <stdio.h>
#include <math.h>
int main()
{
  int t, n, r;
  int result;
  
  scanf("%d",&t);
  
  while(t>0)
  {
  	scanf("%d",&n);
  	
  	result=round(sqrt(n));
  	printf("%d\n",result);
  	
  	t--;
  }
  
}
