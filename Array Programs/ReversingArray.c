#include<stdio.h>
int main(){
    int a,temp;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < a; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a/2; i++){
        temp = arr[i];
        arr[i] = arr[a - i - 1];
        arr[a - i - 1] = temp;
    }
    printf("The reversed array is:\n");
    for(int i = 0; i < a; i++){
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    return 0;
}