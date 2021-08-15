#include <stdio.h>

int main(void) {
	int t,n,i,j,p;
	scanf("%d",&t);
	for( p=1;p<=t;p++)
	{
	    scanf("%d",&n);
	    int a[n][n];
	    int k=2;
	    a[0][0]=1;
	    for(j=1;j<n;j++)
	    {
	        i=0;
	        int m=j;
	        while(m>=0)
	        {
	            a[i][m]=k;
	            k++;
	            i++;
	            m--;
	        }
	    }
	    for(i=1;i<n;i++)
	    {
	        int m=n-1;
	        int l=i;
	        while(m>=i)
	        {
	            a[l][m]=k;
	            k++;
	            m--;
	            l++;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            printf("%d ",a[i][j]);
	        }
	        printf("\n");
	    }
	}
	return 0;
}


