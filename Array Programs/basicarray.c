#include<stdio.h>
int main(){
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < a; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a; i++){
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    printf("The elements of the array are printed successfully.\n");
    return 0;
}
