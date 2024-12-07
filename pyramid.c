#include <stdio.h>

int main()
{
    int rows, i, j;

    // Input the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Print the pyramid
    for (i = rows; i >= 1; i--)
    {
        // Print spaces
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}