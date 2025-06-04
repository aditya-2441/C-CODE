#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("Element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
    for(int i=j;i<n;i++){
        if(a[j]>a[i]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }}
    printf("The array in ascending order is:\n");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    for(int j=0;j<n;j++){
    for(int i=j;i<n;i++){
        if(a[j]<a[i]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }}
    printf("\nThe array in descending order is:\n");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}