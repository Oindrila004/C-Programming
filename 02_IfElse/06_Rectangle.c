#include<stdio.h>
int main()
{
    float length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);
    
    float area, perimeter;
    area = length * width;
    perimeter = 2 * (length + width);

    if(area > perimeter){
        printf("The area of the rectangle is greater than its perimeter");
    }
    else{
        printf("The perimeter is greater...");
    }
    return 0;
}