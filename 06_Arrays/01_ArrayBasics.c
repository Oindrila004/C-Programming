#include<stdio.h>
int main(){
    // int marks1 = 78;
    // int marks2 = 89;
    // int marks3 = 95;

    // int marks[] = {78, 89, 95};

    int marks[3];
    printf("Enter physics marks: ");
    scanf("%d",&marks[0]);
    printf("Enter maths marks: ");
    scanf("%d",&marks[1]);
    printf("Enter biology marks: ");
    scanf("%d",&marks[2]);
    printf("Physics = %d\nMaths = %d\nBiology = %d\n",marks[0],marks[1],marks[2]);
    return 0;
}