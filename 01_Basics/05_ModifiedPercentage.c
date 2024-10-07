//Write a C program to calculate the percentage of 4 subjects where marks are out of 40
#include<stdio.h>
int main()
{
    float sub1 = 32, sub2 = 35, sub3 = 38, sub4 = 30;
    float percentage;
    percentage = (((sub1 + sub2 + sub3 + sub4) * 100) / 40) / 4;
    printf("The overall percentage of your marks is: %f",percentage);
    return 0;
}