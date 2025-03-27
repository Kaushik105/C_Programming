/*
1
22
333
4444
*/

#include<stdio.h>

int main(){
    int height;
    printf("Enter height of pattern: ");
    scanf("%d", &height);
    for(int i=1; i<=height; i++){
        for(int j=0; j<i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
