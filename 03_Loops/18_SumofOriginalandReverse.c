#include<stdio.h>
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int lastdigit = 0;
    int sum = n;
    int reverse = 0;
    while(n!=0){
        lastdigit = n%10;
        reverse = (reverse*10) + lastdigit;
        n = n/10;
    }
    sum = sum + reverse;
    printf("The sum of the original number and its reverse version is %d",sum);
    return 0;
}