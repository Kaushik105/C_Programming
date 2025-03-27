#include<stdio.h>

int main(){
    int a,n,r,m,s=0;
    printf("Enter the number: ");
    scanf("%d", &a);
    n=m=a;
    while(n>0){
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(m==s)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}