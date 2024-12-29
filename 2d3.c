#include <stdio.h>

int main() {
    int m,n;
    printf("Enter the number of rows(m) and columns(n):");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n];
    int  c[m][n];
    printf("Enter the elements of matrix A:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix B:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}