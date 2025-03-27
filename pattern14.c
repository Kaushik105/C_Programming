//     1 
//    2 3
//   4 5 6
//  7 8 9 10


#include <stdio.h>
int main()
{
    int n, x = 1;
    printf("Enter height: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
    return (0);
}