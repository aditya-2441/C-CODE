#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < a; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a; i++){
        sum += arr[i];
    }
    printf("Sum of all the array elements is %d.\n",sum);
    return 0;
}
