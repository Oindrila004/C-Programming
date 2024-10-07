#include<stdio.h>
int main(){
    int number;
    printf("Enter your number: ");
    scanf("%d",&number);
    if(number < 0){
        number = number * (-1);
        printf("The absolute value of your number is: %d",number);
    }
    else{
        printf("The absolute value of your number is: %d",number);
    }
    return 0;
}