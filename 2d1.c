#include <stdio.h>

int main() {
    int m,n;
    printf("Enter the number of rows(m) and columns(n):");
    scanf("%d %d",&m,&n);
    int mat[m][n];
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element of [%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Row-wise:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
    }
    printf("\nColumn-wise:");
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            printf("%d ",mat[i][j]);
        }
    }

    return 0;
}