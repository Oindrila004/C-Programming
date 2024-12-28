#include<stdio.h>
float conversion(int temp){
    int f = ((temp*9)/5)+32;
    return f;
}
int main(){
    float c;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&c);
    conversion(c);
    printf("The temperature in Fahrenheit is: %f",conversion(c));
    return 0;
}