//2-4+6-8+10.....
#include<stdio.h>

int main(){
    int n,s=0;
    printf("Enter No. of terms: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            printf("%d+", i*2);
            s-=(i*2);
        }
        else{
            printf("%d-", i*2);
            s+=(i*2);
        }
    }
    printf("\b = %d", s);
}