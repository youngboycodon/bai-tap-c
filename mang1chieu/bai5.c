#include <stdio.h>

void mang(int a[],int n,int x,int m[]){
    m[0]=0;
    for (int i=0;i<n;i++){
        printf ("nhap gia tri thu %d",i+1);
        scanf ("%d",&a[i]);
        if(x==a[i]){
            m[0]++;
        }
    }
}

int main (){
    int n,x;
    printf ("nhap so gia tri cua mang:");
    scanf ("%d",&n);
    int a[n];
    int m[1];
    printf ("nhap phan tu x:");
    scanf("%d",&x);
    mang(a,n,x,m);
    printf ("phan tu %d xuat hien %d lan trong mang",x,m[0]);
}