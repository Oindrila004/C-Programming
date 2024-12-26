#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the first value: ");
    scanf("%d",&x);
    printf("Enter the second value: ");
    scanf("%d",&y);
    printf("The real values are: %d %d\n",x,y);
    int swap = x;
    x = y;
    y = swap;
    printf("The swap values are: %d %d\n",x,y);
    return 0;
}