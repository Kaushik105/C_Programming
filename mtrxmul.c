//multiplication of matrix in c
#include<stdio.h>

int main(){
    int m1[3][3]={{1,2,3},{2,8,7},{2,7,6}},m2[3][3]={{4,5,9},{2,7,4},{6,8,2}},m3[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                int sum=0;
            for(int k=0;k<3;k++){
                sum=sum+m1[i][k]*m2[k][j];
                
            }
            m3[i][j]=sum;
        }
    }

    for(int i=0;i<=2;i++){
        for(int j=0; j<=2;j++){
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
}
    