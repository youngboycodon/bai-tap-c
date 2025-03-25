#include <stdio.h>
#include <math.h>
int main () {
    float a,b,c,d,e,f,m,n,p;
    scanf ("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    m=e*c-b*f;
    n=a*f-c*d;
    p=e*a-b*d;
    if (p=0){
        if (m==0 & n==0){
            printf ("he phuong trinh vo so nghiem");
        }
        else {
            printf ("he phuongtrinh vo nghiem");
        }
    }
    else {
        
        printf ("he phuong trinh co nghiem x=%.2f y=%.2f ",m/p,n/p);
    }
}
