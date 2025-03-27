#include<stdio.h>

int main(){
    int h;
    printf("Enter height: ");
    scanf("%d", &h);
    for(int i=0; i<h; i++){
        for(int j=h; j>i; j--){
            printf("* ");
        }
        printf("\n");
    }
}
/*
****
***
**
*
*/