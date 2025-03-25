#include <stdio.h>
int main () {
    int a,b ;
    scanf ("%d%d",&a,&b);
    if (a%4==0 & a%100!=0){
        if (b==2){
            printf ("nam %d thang 2 ngay 28",a);
        }
        else if (b==1,3,5,7,8,10,12){
            printf ("nam %d thang %d ngay 31",a,b);
        }
        else if (b==4,6,9,11){
            printf ("nam %d thang %d ngay 30",a,b);
        }
    }
    else 
        if (b==2){
            printf ("nam %d thang 2 ngay 29",a);
        }
        else if (b==1,3,5,7,8,10,12){
            printf ("nam %d thang %d ngay 31",a,b);
        }
        else if (b==4,6,9,11){
            printf ("nam %d thang %d ngay 30",a,b);
        }
    }