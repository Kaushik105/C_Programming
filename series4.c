//0+2+6+12+......=
#include<stdio.h>

int main(){
    int n,s=0;
    printf("Enter terms: ");
    scanf("%d",&n);
    for(int i=0,j=1;i<n;i++,j++){
        printf(" %d +",i*j);
        s+=i*j;
    }
    printf("\b= %d",s);
}