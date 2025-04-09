#include <stdio.h>
#include <math.h>


void tong(int a[],int n,float m[]){
    m[0] = 0;
    m[1] = 0;
    m[2] = 0;
    m[3]=0;
    m[4]=0;
    m[5]=0;
    int p=0,q=0;
    for (int i=0;i<n;i++){
        printf ("nhap vao so thu %d cua mang",i+1);
        scanf("%d",&a[i]);
        m[0]+=a[i];
        if (a[i]<0){
            m[1]+=a[i];
            p++;
        }
        else {
            m[2]+=a[i];
            q++;
        }
    }
    m[3]=m[0]/n;
    m[4]=m[1]/p;
    m[5]=m[2]/q;
}


int main (){
int n;
float m[6];
printf ("nhap vao so gia tri cua mang:");
scanf("%d",&n);
int a[n];
tong (a,n,m);
printf ("tong cua cac so trong mang la %.2f\n",m[0]);
printf ("tong cua cac gia tri am la %.2f\n",m[1]);
printf ("tong cua cac gia tri duong la %.2f\n",m[2]);
printf ("trung binh cong cua mang %.2f\n",m[3]);
printf ("trung binh cong cua ca so am la %.2f\n",m[4]);
printf ("trung binh cong cua cac so duong la %.2f\n",m[5]);
}