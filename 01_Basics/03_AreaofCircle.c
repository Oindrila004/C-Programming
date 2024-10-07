#include<stdio.h>
int main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    float area, pi = 3.14;
    area = pi * radius * radius;
    printf("The area of your circle is: %f",area);
    return 0;
}