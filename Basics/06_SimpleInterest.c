#include<stdio.h>
int main()
{
    float principle, rate, time, simple_interest;
    printf("Enter your principle amount: ");
    scanf("%f",&principle);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter time: ");
    scanf("%f",&time);
    simple_interest = (principle * rate * time) / 100;
    printf("The simple interest of your principle is: %f",simple_interest);
    return 0;
}