/*
            1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5
  6 7 8 9 10 11 10 9 8 7 6
7 8 9 10 11 12 13 12 11 10 9 8 7
*/
#include<stdio.h>

int main(){
    int n;
    printf("Height: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        int s;
        for(int j=1,k=i;j<=i;j++,k++){
            printf("%d ",k);
            s=k;
        }
        for(int j=1,l=s-1;j<i;j++,l--){
            printf("%d ",l);
        }
        printf("\n");
    }
}