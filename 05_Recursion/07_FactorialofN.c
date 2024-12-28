#include<stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
    int factNm1 = factorial(n-1);
    int factN = factorial(n-1) * n;
    return factN;
}
int main(){
    int count;
    printf("Enter the number to calculate factorial: ");
    scanf("%d",&count);
    factorial(count);
    printf("The factorial of your given number is: %d\n",factorial(count));
    return 0;
}