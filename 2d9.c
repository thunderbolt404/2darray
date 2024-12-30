#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter the size of the square matrix(n):");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter the elements of the square matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                printf("%d ",mat[i][j]);
                sum+=mat[i][j];

            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("Sum=%d",sum);
    return 0;
}