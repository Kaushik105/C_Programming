#include<stdio.h>

int fib(int);

int main(){
    int n,x=1,y=1;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    //normal method
    // printf("0 1 ");
    // for(int i=0;i<n-2;i++){
    //     printf("%d ",y);
    //     int t;
    //     t=y;
    //     y=x+y;
    //     x=t;
    // }
    //RECURSION
    int i=0;
    while(i<n){   
        ++i;
        printf("%d ",fib(i));
    }
    

}

//recursion to print nth fibonacci number
int fib(int a){
    if(a==0 || a==1)
    return 0;
    else{
        if(a==2)
        return 1;
        else
        return (fib(a-1)+fib(a-2));
    }
}