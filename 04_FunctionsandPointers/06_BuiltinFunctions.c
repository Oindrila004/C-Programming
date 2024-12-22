#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    float root = sqrt(num);
    printf("The square root of the number is : %f",root);

    float cuberoot = cbrt(num);
    printf("The cube root of your number is: %f",cuberoot);

    int base;
    printf("Enter the base: ");
    scanf("%d",&base);
    int power;
    printf("Enter the power: ");
    scanf("%d",&power);
    int p = pow(base, power);
    printf("%d raised to the power %d is %d",base,power,p);
    return 0;
}