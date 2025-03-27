//1!+2!+3!+.....+n!=result
#include<stdio.h>

int main(){
    int n,s=0;
    printf("Enter terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int t=1;
        printf("%d!+",i);
        for(int j=1; j<=i;j++){
            t*=j;
        }
            s+=t;       
    }
    printf("\b = %d",s);
}