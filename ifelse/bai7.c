#include <stdio.h>
int main () {
    float dtb;
    scanf("%f",&dtb);
    if (dtb>=0 & dtb<=10){
        if (dtb<5){
            printf ("yeu");
        }
        else if (dtb>=5 &dtb<7){
            printf ("tb");
        }
        else if (dtb>=7 &dtb <8){
            printf ("kha");
        }
        else if (dtb>=8 & dtb <9){
            printf ("gioi");
        }
        else if (dtb>9){
            printf ("xuat sac");
        }
    }
    else {
        printf ("khong hop le");
    }
}