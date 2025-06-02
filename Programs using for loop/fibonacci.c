#include<stdio.h>
int main(){
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
    printf("\n");
    return 0;
}