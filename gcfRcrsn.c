#include<stdio.h>

int gcf(int n, int m){
    if((n>=m) && ((n%m)==0))
    return m;
    else
    gcf(m,(n%m));
}

int main(){
    int n,m,r; 
    printf("Enter two numbers: ");
    scanf("%d %d", &n,&m);
    r=gcf(n,m);
    printf("%d",r);
}