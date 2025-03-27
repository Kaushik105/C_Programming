/*
1
01
101
0101
10101
010101
1010101
01010101
*/
#include<stdio.h>

int main(){
    int n,x=1;
    printf("Number:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0)
            x=0;
        else    
            x=1;
        for(int j=0; j<i; j++){
            printf("%d",x);
            if(x)
                x=0;
            else
                x=1;
        }
        printf("\n");
    }
}