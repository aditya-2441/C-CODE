#include<stdio.h>
int main(){
    int n,sum=0,j=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        j+= i;
        sum+=j;
        printf("%d ", j);
    }
    printf("\nSum of the series: %d\n", sum);
    return 0;
}