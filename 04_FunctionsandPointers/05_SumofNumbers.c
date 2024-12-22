#include<stdio.h>
int sum(int x, int y, int z){
    return x + y + z;
}
int main(){
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    int result = sum(num1, num2, num3);
    printf("The sum of the numbers is: %d",result);
    return 0;
}