#include<stdio.h>
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    printf("Before swap: %d %d\n",x,y);
    swap(&x,&y);
    printf("After swap: %d %d\n",x,y);
    return 0;
}