#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the identity matrix:");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j&&j==i){
                printf("1");
            }
            else(printf("0"));
        }
        printf("\n");
    }
    return 0;
}