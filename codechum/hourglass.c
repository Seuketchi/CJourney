
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("input odd number: ");
    scanf("%d", &n);

    for (i = 0; i < n / 2 + 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (j = 0; j < n - 2 * i; j++) //-2 because deduct both side for triangle shape
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n / 2 - 1; i >= 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf(" ");
        }
        for (j = 0; j < n - 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}