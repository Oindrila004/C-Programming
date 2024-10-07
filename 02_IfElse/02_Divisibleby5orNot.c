#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the number to check: ");
    scanf("%d",&num1);
    if(num1 % 5 == 0){
        printf("The number is divisible by 5");
    }
    else{
        printf("The number is not divisible 5");
    }
    return 0;
}