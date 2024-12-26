#include<stdio.h>
int main(){
    int x;
    int* ptr = &x;
    printf("\n%p\n\n",ptr);//using pointer to print the address of x variable
    return 0;
}