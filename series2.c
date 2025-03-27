//7/1+7/2+7/3.....7/7=
#include<stdio.h>

int main(){
    int x,n;
    float s=0;
    printf("Enter number and terms: ");
    scanf("%d %d", &x, &n);
    for(int i=1; i<=n; i++){
        printf(" %d/%d +",x,i);
        s+=(float)x/i;
    }
    printf("\b\b = %.2f", s);

}