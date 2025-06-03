#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int count=0;
    do{
        n /= 10;
        count++;
    } while(n != 0);
    printf("Number of digits: %d\n", count);
    return 0;
}