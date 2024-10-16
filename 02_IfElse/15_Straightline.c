#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the first x-intercept: ");
    scanf("%d",&x1);
    printf("Enter the first y-intercept: ");
    scanf("%d",&y1);
    printf("Enter the second x-intercept: ");
    scanf("%d",&x2);
    printf("Enter the second y-intercept: ");
    scanf("%d",&y2);
    printf("Enter the third x-intercept: ");
    scanf("%d",&x3);
    printf("Enter the third y-intercept: ");
    scanf("%d",&y3);

    double m1, m2;
    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);
    
    if(m1 == m2)
        printf("Three points fall on one straight line");
    else
        printf("This is not a straight line");
    return 0;
}