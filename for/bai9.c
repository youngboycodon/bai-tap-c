#include <stdio.h>
#include <math.h>
int main () {
    int n,m=1;
    float x=0;
    printf ("nhap so bat ki ");
    scanf ("%d",&n);
    for (int i=1; i<=n;i++){
        m*=i;
        x+=1.0/m;
    }
    printf ("S=%.2lf",x);
}