#include <stdio.h>
#include <math.h>

int main()
{
    char binary[32]; // To store binary number as string
    int decimal = 0, length, i;

    printf("Enter a binary number: ");
    scanf("%s", binary); // Take binary number as input

    // Find the length of the binary string
    length = strlen(binary);

    // Convert binary to decimal
    for (i = 0; i < length; i++)
    {
        if (binary[i] == '1') // Check if the current digit is '1'
        {
            decimal += pow(2, length - 1 - i); // Add corresponding power of 2
        }
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
