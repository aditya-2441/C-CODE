#include<stdio.h>
int main(){
    int a,b,c,d,e,total,per;
    printf("Enter marks in each subject:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total = a + b + c + d + e;
    per =( total / 5);
    printf("Total marks = %d\n", total);
    printf("Percentage = %d%%\n", per);
    if(per >= 90){
        printf("Grade = A\n");
    } else if(per >= 80){
        printf("Grade = B\n");
    } else if(per >= 70){
        printf("Grade = C\n");
    } else if(per >= 60){
        printf("Grade = D\n");
    } else if(per >= 40){
        printf("Grade = E\n");
    } else {
        printf("Grade = F\n");
    }
}