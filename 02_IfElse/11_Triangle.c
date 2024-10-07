#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the first side of your triangle: ");
    scanf("%d",&side1);
    printf("Enter the second side of your triangle: ");
    scanf("%d",&side2);
    printf("Enter the third side of your triangle: ");
    scanf("%d",&side3);

    if((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2){
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}