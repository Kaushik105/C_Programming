#include<stdio.h>

int main(){
    int h;
    printf("Enter height of pattern: ");
    scanf("%d", &h);
    for(int i=1; i<=h; i++){
        for(int k=1; k<=h-i; k++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ",j);
        }
        if(i!=1){
            for(int l=i-1; l>=1; l--){
            printf("%d ",l);
        }
        }
        printf("\n");
    }
}
/*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
1 2 3 4 5 6 5 4 3 2 1
*/