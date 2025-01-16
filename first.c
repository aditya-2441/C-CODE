#include <stdio.h>
#include <ncurses.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The number is %d\n", a);
    getchar(); // To consume the newline character left by scanf
    getchar(); // To wait for user input before closing
    return 0;
}