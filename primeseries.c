#include<stdio.h>

int main(){
    int n,s=2;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("2 +");
    for(int i=1,j=3; i<n; i++,j+=2){
        printf(" %d +",j);
        s+=j;
    }
    printf("\b = %d",s);
}