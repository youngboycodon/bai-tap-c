#include <stdio.h>
#include <math.h>

void maxmin(int a[],int n,int m[]){
    m[0]=0;
    m[1]=0;
    m[2]=0;
    m[3]=0;
    int p=-1000;
    int q=1000;
    for (int i=0;i<n;i++){
        printf ("nhap vao gia tri thu %d:",i+1);
        scanf("%d",&a[i]);
        if (p<a[i]){
            p=a[i];
            m[2]=i+1;
            m[0]=p;
        }
        if (q>a[i]){
            q=a[i];
            m[3]=i+1;
            m[1]=q;
        }
    }
}

int main (){
    int n;
    int m[4];
    printf ("nhap vao so gia tri cua mang:");
    scanf ("%d",&n);
    int a[n];
    maxmin(a,n,m);
    printf ("phan tu lon nhat cua mang la:%d,vi tri:%d\n",m[0],m[2]);
    printf ("phan tu nho nhat cua mang la:%d,vi tri:%d\n",m[1],m[3]);
}