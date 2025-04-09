#include <stdio.h>

void mang(int a[],int n){
    for (int i=0;i<n;i++){
        printf ("nhap vao gia tri thu%d:",i+1);
        scanf ("%d",&a[i]);
        if (a[i]<0){
            a[i]=0;
        }
    }
    printf ("cac phan tu cua mang:");
    for (int i=0;i<n;i++){
        printf ("%d",a[i]);
    }
}

int main (){
    int n;
    printf ("nhap so phan tu cua mang:");
    scanf ("%d",&n);
    int a[n];
    mang(a,n);
}