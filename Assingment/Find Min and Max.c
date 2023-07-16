#include <stdio.h>
// Find min and max

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int x = 0; x < n; x++)
    {
        printf("Element %d: ", x + 1);
        scanf("%d", &arr[x]);
    }

    int searchValue;
    printf("\nEnter the value to search in the array: ");
    scanf("%d", &searchValue);

    int found = 0;
    for (int x = 0; x < n; x++)
    {
        if (arr[x] == searchValue)
        {
            printf("Element %d found at index %d.\n", searchValue, x);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element %d not found in the array.\n", searchValue);

    int min = arr[0];
    int max = arr[0];
    for (int x = 1; x < n; x++)
    {
        if (arr[x] < min)
            min = arr[x];
        if (arr[x] > max)
            max = arr[x];
    }
    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
