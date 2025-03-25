#include <stdio.h>
#include <math.h>
int main () {
    int n,m;
    printf ("nhap vao 1 so bat ki ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){
        if (n%i==0){
            m+=i;
        }
    }
    if (m==2*n){
        printf ("%d la so hoan hao ",n);
    }
    else {
        printf ("%d khong phai so hoan hao ",n);
    }
}