#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix(n):");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter the elements of the square matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Major diagonal: ");
    for(int i=0;i<n;i++){
        printf("%d ",mat[i][i]);
    }
    printf("\nMinor diagonal: ");
    for(int i=0;i<n;i++){
        printf("%d ",mat[i][n-i-1]);
    }
    return 0;
}