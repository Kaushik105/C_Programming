#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 char bin[32];
 int dec=0;
 printf("Enter the binary number: ");
 scanf("%s", &bin);
 int len = strlen(bin);
 for (int i = 0; i <= len-1; i++)
 {
    int x = bin[i] - '0';
    if (x == 1)
    {
        dec += pow(2, len-1-i);
    }
 }
 printf("%d", dec);
 return(0);
}   