#include <stdio.h>
#include <math.h>

float luythua(float x, int y){
    float m=1;
    for (int i=1;i<=y;i++){
        m*=x;
    }
    return m;
}

int main (){
    float x,z;
    int y;
    printf ("nhap co so");
    scanf ("%f",&x);
    printf ("nhap so mu");
    scanf ("%d",&y);
    z=luythua(x,y);
    printf ("%.2f^%d=%.2f",x,y,z);
}