#include<stdio.h>
int main(){
    int x = 9;
    int* z1 = &x;
    int y = 5;
    int* z2 = &y;
    printf("\n%d\n",*z1);
    printf("%d\n",*z2);
    return 0;
}