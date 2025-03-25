#include <stdio.h>
#include <math.h>
int main () {
    int n;
    for (int i=1; i<=100; i++){
        if (i%2!=0){
            n+=i;
            
        }
        
    }
    printf ("tong cac so le tu 1 den 100 la %d ",n);
}