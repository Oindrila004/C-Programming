#include<stdio.h>
#include<math.h>
int main()
{
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f",&radius);
    float volume, pi;
    pi = 3.14;
    volume = (4*pi*radius*radius*radius)/3;
    printf("The volume of the sphere is: %f",volume);
    return 0;
}