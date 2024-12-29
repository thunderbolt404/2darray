#include <stdio.h>

int main() {
    int m1,n1;
    int m2,n2;
    printf("Enter the number of rows(m1) and columns(n1) of matrix A:");
    scanf("%d %d",&m1,&n1);
    printf("\nEnter the number of rows(m2) and columns(n2) of matrix B:");
    scanf("%d %d",&m2,&n2);
    int a[m1][n1],b[m2][n2];
    int  c[n1][m2];
    printf("Enter the elements of matrix A:");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of matrix B:");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n1==m2){
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                c[i][j]=0;
                for(int k=0;k<n1;k++){
            c[i][j]+=a[i][k]*b[k][j];
                }
            }    
        }
    }
    else{
        printf("Not possible.");
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}