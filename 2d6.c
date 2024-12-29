#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of the dimension of the square matrix:");
    scanf("%d", &n);
    int mat[n][n],trans[n][n];
    int isSymm=1;
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
            trans[j][i]=mat[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(trans[j][i]!=mat[i][j]){
                isSymm=0;
                break;
            }
        }
    }
    printf("Transpose:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    if(isSymm){
        printf("Yes,Symmetric");
    }
    else{
        printf("Not symmetric");
    }
        return 0;
}