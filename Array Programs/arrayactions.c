#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int element, i, loc, size, n = 0, j = 0;
    printf("Enter the size of an array\n");
    scanf("%d", &size);
    printf("Enter %d array elements\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("List before insertion:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the element to be inserted\n");
    scanf("%d", &element);
    printf("Enter the location at which element %d is to be inserted\n", element);
    scanf("%d", &loc);

    // Validate location
    if (loc < 1 || loc > size + 1) {
        printf("Invalid location!\n");
        return 1;
    }

    loc--; // Convert to 0-based index
    for (i = size; i > loc; i--)
    {
        a[i] = a[i - 1];
    }
    a[loc] = element;
    size++; // Increase size after insertion

    printf("List after insertion:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the element to be deleted\n");
    scanf("%d", &n);

    int found = 0;
    for (i = 0; i < size; i++)
    {
        if (a[i] == n)
        {
            found = 1;
            for (j = i; j < size - 1; j++)
            {
                a[j] = a[j + 1];
            }
            size--; // Decrease size after deletion
            break;
        }
    }
    if (!found) {
        printf("Element not found. No deletion performed.\n");
    }

    printf("List after deletion:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
