#include<stdio.h>
int prime(int n){
    if(n == 1 || n == 0){
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0){
            if(i == 1 || i == n)
            continue;
            else
                return 0;
        }
    }
    return 1;
    
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(prime(n))
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);
 return(0);
}