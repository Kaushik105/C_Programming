//1+2/2!+3/3!+....+n/n!=result
#include<stdio.h>

int main(){
    int n,f;
    float s=0.00;
    printf("Enter terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=1;
        int t=1;
        if(i==1)
        printf("%d+",i);
        else
        printf("%d/%d!+",i,i);
    for(int j=1;j<=i;j++){
        t*=j;
    }
    s+=(float)i/t;
    }
    printf("\b=%.3f", s);
}