#include<stdio.h>

int fact(int);

int main(){
    int n,t=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for( int i=1; i<=n; i++){
        t*=i;
    }
    printf("%d! = %d", n,t);
    t=fact(n);
    printf("\n recursion \n%d! = %d", n,t);
}

int fact(int a){
    if(a==0)
        return 1;
    else
        return a*fact(a-1);

}