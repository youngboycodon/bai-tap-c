#include <stdio.h>
#include <math.h>
int main () {
    int n;
    long long fn;
    printf ("nhap so n bat ki");
    scanf ("%d",&n);
    int f1=0, f2=1;
    for (int i=1; i<=n; i++){
        fn=f1+f2;
        f1=f2;
        f2=fn;
        printf (" %lld",fn);
    }
}
