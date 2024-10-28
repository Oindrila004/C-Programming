#include<stdio.h>
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int lastdigit = 0;
    int reverse = 0;
    while(n!=0){
        lastdigit = n%10;
        reverse = (reverse*10) + lastdigit;
        n = n/10;
    }
    printf("The reverse of your number is %d",reverse);
    return 0;
}