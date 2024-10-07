#include<stdio.h>
int main()
{
    int num1 , num2;
    printf("Enter the value of num1: ");
    scanf("%d",&num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);
    int remainder;
    remainder = num1 % num2;//another formula: remainder = Dividend - (Divisor * Quotient)
    printf("The remainder of your numbers is: %d",remainder);
    return 0;
}