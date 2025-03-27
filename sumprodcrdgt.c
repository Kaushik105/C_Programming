#include<stdio.h>

int main(){
    int a, m=1, r, n, s=0;
    printf("Enter the number: ");
    scanf("%d", &a);
    n=a;
    while(n>0){
        r=n%10;
        n/=10;
        s+=r;
        m*=r;
    }
    printf("Sum: %d \nMultiplication: %d", s,m);
    return 0;
}