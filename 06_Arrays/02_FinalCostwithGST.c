#include<stdio.h>
int main(){
    float price[3];
    printf("Enter first price: ");
    scanf("%f",&price[0]);
    printf("Enter second price: ");
    scanf("%f",&price[1]);
    printf("Enter third price: ");
    scanf("%f",&price[2]);
    printf("Total price: %f\n",price[0]+(0.18*price[0])); 
    printf("Total price: %f\n",price[1]+(0.18*price[1])); 
    printf("Total price: %f\n",price[2]+(0.18*price[2])); 
    return 0;
}