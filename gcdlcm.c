#include<stdio.h>

int findGCD(int, int);
int main()
{
    int a, b, gcd, lcm;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        gcd = findGCD(b,a);
    }
    else{
        gcd = findGCD(a,b);
    }
    lcm = (a*b)/gcd;
    printf("GCD is %d & LCM is %d", gcd, lcm);
    return(0);
}
int findGCD(int s, int b){
    int rem = 1;
    do{
        rem = b % s;
        b = s;
        s = rem;
    } while (rem != 0);
    return b;
}