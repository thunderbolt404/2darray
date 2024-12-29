#include <stdio.h>
#include <limits.h>

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
    int max=INT_MIN;
    int maxr=INT_MIN,maxc=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
                maxr=i;
                maxc=j;
            }
        }
    }
    printf("Max:%d",max);
    printf("\nLocation:[%d][%d]",maxr,maxc);
    return 0;
}