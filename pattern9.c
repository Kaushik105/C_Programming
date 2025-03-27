#include<stdio.h>

int main(){
    int n;
    printf("Height: ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
        for(int k=0;k<i;k++){
            printf(" ");
        }
        for(int j=0;j<=n-i;j++){
            printf("*");
        }
        for(int l=n-i;l>0;l--){
            printf("*");
        }
        printf("\n");
    }
}
/*
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/