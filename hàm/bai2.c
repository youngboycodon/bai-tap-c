#include <stdio.h>
#include <math.h>


float giaithua(int n){
    if (n==0 || n==1){
        return 1;
    }
    else {
        return n*giaithua(n-1);
    }
}

int main (){
    int n,m;
    printf ("nhap so bat ki");
    scanf ("%d",&n);
    m=giaithua(n);
    printf ("%d!=%d",n,m);
}