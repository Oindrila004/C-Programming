#include<stdio.h>
void greet(int n){
    if(n==0) return;
    printf("Good morning\n");
    greet(n-1);
}
int main()
{
    greet(5);
    return 0;
}