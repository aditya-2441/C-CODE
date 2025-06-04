#include<stdio.h>
int largest(int a[],int n){
    int temp;
    for(int j=0;j<n;j++){
    for(int i=j;i<n;i++){
        if(a[j]<a[i]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }}
    return a[0];
}
int main(){
    int x;
    printf("Enter the number of variables: ");
    scanf("%d",&x);
    int b[x];
    printf("Enter the Variables:\n");
    for(int i=0;i<x;i++){
        printf("No %d:",i+1);
        scanf("%d",&b[i]);
    }
    int largestElement = largest(b, x);
    printf("The largest variable is: %d\n", largestElement);
    return 0;
}
   
