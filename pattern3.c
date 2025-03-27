/*
 *
 **
 ***
 ****
 */

#include<stdio.h>

int main(){
    int h;
    printf("Enter height: ");
    scanf("%d",&h);
    for(int i=1; i<=h; i++){
        for(int k=0; k<h-i; k++){
            printf("  ");
        }
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
