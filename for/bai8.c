#include <stdio.h>
#include <math.h>
int main () {
    int n;
    int m=1;
    printf ("nhap vao so bat ki");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){
        m*=i;
    }
    printf ("%d!=%d",n,m);
}