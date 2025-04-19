#include <stdio.h>

void doivitri(int *a,int *b){
    int tam=*a;
    *a=*b;
    *b=tam;
}

int main (){
    int a=5,b=6;
    printf ("gia tri a va b truoc khi doi la:%d%d\n",a,b);
    doivitri(&a,&b);
    printf ("gia tri a va b sau khi doi la:%d%d",a,b);
}