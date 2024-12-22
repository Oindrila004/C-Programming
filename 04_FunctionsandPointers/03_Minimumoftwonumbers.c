#include<stdio.h>
int minimum(int x, int y){
    if(x>y){
        return y;
    }
    else{
        return x;
    }
}
int main(){
    int num1, num2;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);
    printf("Enter the 2nd number: ");
    scanf("%d",&num2);
    int m = minimum(num1, num2);
    printf("Minimum of %d and %d is %d",num1,num2,m);
    return 0;
}