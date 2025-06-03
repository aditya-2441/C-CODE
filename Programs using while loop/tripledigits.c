#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0,product=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<100){
        printf("Please enter a three-digit number.\n");
        return 1;
    }
    else{
        while(n>0){
            int digit = n % 10; // Get the last digit
            sum += digit;       // Add to sum
            product *= digit;   // Multiply to product
            n /= 10;            // Remove the last digit
        }
        printf("Sum of digits: %d\n", sum);
        printf("Product of digits: %d\n", product);
    }
}