#include<stdio.h>
int main() {
    int i,n,result=0;
    
    printf("Enter both numbers to multiply: ");
    scanf("%d %d", &i, &n);
    
    for(int j= 1; j <= n; j++) {
        result += i;
    }
    printf("%d x %d = %d\n", i, n, result);
    return 0;
}