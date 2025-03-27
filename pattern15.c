// A
// BA
// CBA
// DCBA
#include<stdio.h>
    int
    main()
{
 int n; 
 char ch = 'A';
 printf("Enter the height: ");
 scanf("%d", &n);
 for (int i = 0; i < n; i++)
 {
    for (int  j = i; j >= 0; j--)
    {
        printf("%c", ch + j);
    }
    printf("\n");
 }
 return(0);
}