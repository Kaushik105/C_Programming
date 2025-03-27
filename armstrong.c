#include<stdio.h>

int main(){
    int a,m,n,r,s=0, dgt=0;
    printf("Enter the number: ");
    scanf("%d", &a);
    m=n=a;

    while(n>0){
        n/=10;
        dgt++;
    }
    while(m>0){
        int t=1;
        r=m%10;
        m=m/10;
        for(int i=0;i<dgt;i++){
            t*=r;
        }
        s+=t;
    }
    printf("%d",s);
    if(s==a)
        printf("\nArmstrong number");
    else
        printf("\nNot armstrong number");
    return 0;
}