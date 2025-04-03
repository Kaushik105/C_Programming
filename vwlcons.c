#include<stdio.h>
#include<string.h>
int main()
{
 char ch[100];
 int v = 0, c = 0;
 printf("Enter the string: ");
 gets(ch);
 int x = strlen(ch);
 for (int i = 0; i < x; i++)
 {
    char y = ch[i];
    if ((y > 64 && y < 91) || (y > 96 && y < 123))
    {
        if(y == 'a' || y == 'A' || y == 'e' || y == 'E' || y == 'i' || y == 'I' || y == 'o' || y == 'O' || y == 'u' || y == 'U'){
                c++;
            }
        else {
            v++;

        }
    }
 }
 printf("\nVowels are %d & consonats are %d", c, v);
 
 return(0);
}