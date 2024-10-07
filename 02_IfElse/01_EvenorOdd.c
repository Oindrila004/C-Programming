#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the number to check: ");
    scanf("%d",&num1);
    if(num1 % 2 == 0){
        printf("The number is an even number");
    }
    else{
        printf("The number is an odd number");
    }
    return 0;
}