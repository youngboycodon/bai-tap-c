#include <stdio.h>
#include <math.h>
int main (){
    int n;
    printf ("nhap 1 so bat ki ");
    scanf ("%d",&n);
    for (int i=1 ; i<=n; i++){
        if (n%i==0){
            printf ("cac uoc cua n la %d\n ",i);
        }
    }
}