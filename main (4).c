/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[100], n, target;
    int i, j;
    bool found = false;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = true;
                break;
            }
        }

        if(found)
        {
            break;
        }
    }

    if(found == false)
    {
        printf("No pair found.");
    }

    return 0;
}
