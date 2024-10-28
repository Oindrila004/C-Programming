#include<stdio.h>
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int factorial = 1;
    printf("The factorial is: \n");
    for(int i=1;i<=n;i++){
        factorial = factorial * i;
        printf("%d\n",factorial);
    }
    return 0;
}