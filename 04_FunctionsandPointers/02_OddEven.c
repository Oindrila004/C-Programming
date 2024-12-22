#include<stdio.h>
void OddEven(int x){
    if(x%2==0){
        printf("%d is even",x);
    }
    else{
        printf("%d is odd",x);
    }
    return;
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    OddEven(number);//pass by value
    return 0;
}