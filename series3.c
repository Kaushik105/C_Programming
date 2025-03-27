//1+(1+2)+(1+2+3)+.......=
#include<stdio.h>

int main(){
    int n,s=0;
    printf("Enter terms: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i!=1)
        printf("(");
        for(int j=1;j<=i;j++){
            if(i==1)
            printf("%d", j);
            else
            printf("%d+",j);
            s=s+j;
        }
        if(i==1)
        printf("+");
        else if(i>1 && i<n)
        printf("\b)+");
        else if(i==n)
        printf("\b)");
    }
    printf(" = %d",s);
}