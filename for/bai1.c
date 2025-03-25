#include <stdio.h>
#include <math.h>
int main () {
    int sum=0,so;
    for (int i=0;i<10;i++){
        printf ("nhap so thu %d ",i+1);
        scanf ("%d",&so);
        sum+=so;
        
    }
    printf ("tong 10 so la %d",sum);
}