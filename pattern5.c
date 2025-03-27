#include<stdio.h>

int main(){
    int h;
    scanf("%d", &h);
    for(int i=0; i<h; i++){
        for(int j=h; j>i; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}
/*
54321
5432
543
54
5
*/