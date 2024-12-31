#include <stdio.h>

int main() {
    int m,n,s=0;
    printf("Enter the rows(m) and columns(n) of the matrix:");
    scanf("%d%d",&m,&n);
    int mat[m][n];
    printf("Enter the elements of matrix (%dx%d):",m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)scanf("%d",&mat[i][j]);
    }
    for(int i=0;i<m;i++)s+=mat[i][i];
    printf("%d",s);
    return 0;
}