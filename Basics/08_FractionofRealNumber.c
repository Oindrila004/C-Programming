//Write a C program take float input and print the fractional part of the real number
#include<stdio.h>
int main()
{
    float num1;
    printf("Enter the number: ");
    scanf("%f",&num1);
    int num2;
    num2 = num1;
    float fraction;
    fraction = num1 - num2;
    printf("The fractional part of %f is %f",num1,fraction);
    return 0;
}