#include <stdio.h>
#include <math.h>
void matran(){
    int n,m;
    int a[100][100],b[100][100],c[100][100];
    printf ("nhap so hang va cot cua 2 ma tran:");
    scanf ("%d%d",&n,&m);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf ("nhap phan tu hang %d cot %d:",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("ma tran 1:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }


    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf ("nhap phan tu hang %d cot %d:",i,j);
            scanf ("%d",&b[i][j]);
        }
    }
    printf ("ma tran 2:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf ("%d\t",b[i][j]);
        }
        printf ("\n");
    }
    
    
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf ("tong cua 2 ma tran la :\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf ("%d\t",c[i][j]);
        }
        printf ("\n");
    }
}
int main (){
    matran();
}