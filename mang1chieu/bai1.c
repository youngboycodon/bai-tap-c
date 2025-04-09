#include <stdio.h>
#include <math.h>
int main (){
    int a[10];
    for (int i=0;i<10;i++){
        printf ("nhap vao gia tri thu %d:",i+1);
        scanf ("%d",&a[i]);
    }
    for (int i=0;i<10;i++){
        printf ("%d",a[i]);
    }
}