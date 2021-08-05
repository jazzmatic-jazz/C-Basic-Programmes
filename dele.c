#include <stdio.h>

int main(void) {
	int T,i,j,r,max,sum[100][100],a[100][100];
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&r);
	    for(i=0;i<r;i++){
	        for(j=0;j<=i;j++){
	            scanf("%d",&a[i][j]);
	        }
	    }
	    sum[0][0]=a[0][0];
	    max=sum[0][0];
	    for(i=1;i<r;i++){
	        for(j=0;j<=i;j++){
	            if(j==0){
	                sum[i][0]=sum[i-1][0]+a[i][j];
	            }
	            else if(i==j){
	                sum[i][j]=sum[i-1][j-1]+a[i][j];
	            }
	            else if(sum[i-1][j-1]>sum[i-1][j]){
	                sum[i][j]=sum[i-1][j-1]+a[i][j];
	            }
	            else sum[i][j]=sum[i-1][j]+a[i][j];
	            
	            if(max<sum[i][j])max=sum[i][j];
	        }
	    }
	    printf("\n%d",max);
	}
	return 0;
}


