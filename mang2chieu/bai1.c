#include <stdio.h>

int main (){
    int n,m;
    printf ("nhap so luong dong va cot cua mang:");
    scanf ("%d%d",&n,&m);
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf ("nhap phan tu dong %d cot %d:",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
}