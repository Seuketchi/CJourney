#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int arr[100];

    int n, i;
    bool check = false;

//get array size
    printf("Enter the length of the array: ");
    scanf("%d", &n);

//get array
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }


//print array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

//ascending checker
    for (int i = 0; i < n - 1; ++i)
    {

        if (arr[i] > arr[i + 1]) 
        {
            check = false;
            break;
        }
    }

    printf(check ? "True" : "False");
    printf("\n");
}

