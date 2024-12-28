#include<stdio.h>
int fibonacci(int n){
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int fibN = fibonacci(n-1) + fibonacci(n-2);
    return fibN;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    fibonacci(n);
    printf("Fibonacci of %d is: %d",n,fibonacci(n));
    return 0;
}