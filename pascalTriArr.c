#include<stdio.h>

int main(){
    int a[10][10],n;
    printf("Height: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(j==0 || j==i-1)
                a[i][j]=1;
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++)
            printf(" ");
        for(int j=0;j<i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}