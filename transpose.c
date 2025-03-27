#include<stdio.h>

int main(){
    int a[3][3],t[3][3],i,j;
    printf("Enter the value for matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("row %d coloumn %d = ",i,j);
            scanf("%d", &a[i][j]);
        }
      
    }
    printf("\nThe matrix is :\n");
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    printf("\nTranspose of the matrix is :\n");
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
            t[i][j]=a[j][i];
            printf("%d\t", t[i][j]);
       }
       printf("\n");
    }
}