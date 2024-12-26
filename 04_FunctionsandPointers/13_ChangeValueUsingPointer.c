#include<stdio.h>
int main(){
    int x = 10;
    int* z = &x;
    printf("%d\n",x);
    *z = 9;
    printf("%d\n",x);
    return 0;
}