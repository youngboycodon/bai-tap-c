#include <stdio.h>
#include <math.h>
int main (){
    int a,b,bc;
    
    printf ("nhap vao 2 so bat ki \n");
    scanf ("%d%d",&a,&b);
    bc=a*b;
    while (a!=b){
        if (a<b){
            b=b-a;
        }
        else {
            a=a-b;
        }
        
    }
    printf ("ucln cua 2 so do la %d\n",a);
    printf ("bcnn cua 2 so do la %d\n",bc/a);

    }
