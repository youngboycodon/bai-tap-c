#include <stdio.h>
#include <math.h>
int main () {
    int n;
    float m;
    printf ("nhap vao so bat ki ");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++){
        m+=1.0/i;
    }
    printf ("S = %.2f",m);
}
