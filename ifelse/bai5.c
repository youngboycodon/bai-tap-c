#include <stdio.h>
#include <math.h>
int main () {
    float a,b,c,x1,x2,delta;
    scanf ("%f%f%f",&a,&b,&c);
    if (a==0) {
        printf ("\n he so a khac 0");
    }
    else {
        delta = pow (b,2) - 4*a*c;
        if(delta >0){
            x1=(-b-sqrt(delta)/2*a);
            x2=(-b+sqrt(delta)/2*a);
            printf ("nghiem la%.2f%.2f", x1, x2);
        }
        else if (delta ==0){
            x1=-b/2*a;
            printf ("phuong trinnh co nghiem kep x1=x2 %.2f %.2f",x1);
        }
        else {
            printf ("phuong trinh vo nghiem ");
        }
    }
}