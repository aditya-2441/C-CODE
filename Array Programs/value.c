#include<stdio.h>
int main()
{
    int values[5];
    printf("Enter 5 integerrs: ");
    for(int i = 0; i < 5; ++i)
    {
        scanf("%d", &values[i]);
    }
    printf("Displaying integers:");
    for(int i = 0; i < 5; ++i)
    {
        printf("%d ", values[i]);
    }
}