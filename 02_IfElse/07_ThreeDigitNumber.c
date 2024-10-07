#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    
    if(number > 99 && number < 1000){
        printf("The number is a three digit number");
    }
    else{
        printf("The number is not a three digit number");
    }
    return 0;
}