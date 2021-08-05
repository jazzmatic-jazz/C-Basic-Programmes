#include <stdio.h>

int main ()
{
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;
	 int i , j, n, k;
	 scanf ("%d  %d",&n,&k );
    for (i=1; i<=n; i++) {
        for ( j=i+1; j<=n; j++) {
            if (((i&j) > maxAnd) && ((i&j) < k)) {
                maxAnd = i&j;
            }
            if (((i|j) > maxOr) && ((i|j) < k)) {
                maxOr = i|j;
            }
            if (((i^j) > maxXor) && ((i^j) < k)) {
                maxXor = i^j;
            }
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}
