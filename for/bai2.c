#include <stdio.h>
#include <math.h>
int main (){
    int n,m=0;
    printf ("nhap vao so bat ki ");
    scanf ("%d",&n);
    for (int i=2;i<=n-1;i++){
        if (n%i==0){
            m=1;
            break;
        }
    }
    if (m==1){
        printf ("%d khong phai so nguyen to",n);
    }
    else {
        printf ("%d la so nguyen to",n);
    }
}