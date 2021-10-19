#include<stdio.h>

int main()
{
	int n,i, j,count=0;
	
	scanf("%d",&n);
	int c[n];
	
	
	for (i=0; i<n; i++)
	{
		scanf("%d",&c[i]);
	}
	
	count = 0;
    for(i=0; i<n; i++)
	{
       if(c[i]!=0)
       printf("c[i]:%d\t",c[i]);
	   {
             for( j=i+1; j<n; j++)
			 {
                if(c[i]==c[j])
				{
                    count++;
                    printf("c[j]:%d\t",c[j]);
                    c[j]=0;
                    
                    break;
                    }
              }           
        }
    }
    printf("\n%d", count);
}
