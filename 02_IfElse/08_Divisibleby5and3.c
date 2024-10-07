#include<stdio.h>
int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d",&number);

    if(number % 5 == 0 && number % 3 == 0){
        printf("The number is divisible by 5 and 3");
    }
    else{
        printf("Invalid Input...");
    }
    return 0;
}