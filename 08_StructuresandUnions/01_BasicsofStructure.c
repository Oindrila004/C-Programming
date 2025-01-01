#include<stdio.h>
int main(){
    struct student{
        int roll;
        char name;
        float marks;
        char tier;
    }oindrila, harry;
    // struct student oindrila;
    oindrila.marks = 95;
    oindrila.name = 'O';
    oindrila.roll = 3061;
    oindrila.tier = 'T';

    printf("%d",oindrila.roll);

    // struct student harry;
    harry.marks = 87;
    harry.name = 'R';
    harry.roll = 3078;
    harry.tier = 'A';

    return 0;
}