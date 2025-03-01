#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main()
{
    int n, sum = 0, temp, remainder, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        digits++;
        temp = temp/10;
    }
    temp = n;
    while (temp != 0)
    {
        remainder = temp%10;
        sum = sum + pow(remainder, digits);
        temp = temp/10;
    }
    if (n == sum)
        {printf("%d is an Armstrong number.\n", n);}
    else
        {printf("%d is not an Armstrong number.\n", n);}
    getchar();
}