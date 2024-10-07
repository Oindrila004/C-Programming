#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    if(number % 5 == 0 || number % 3 == 0){
        printf("The number is either divisible by 5 or 3");
    }
    else{
        printf("The number is not divisible by 5 or 3");
    }
    return 0;
}