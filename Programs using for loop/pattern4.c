#include<stdio.h>
int main(){
    int n;
    printf("Enter size of pattern: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=n;j>n-i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}