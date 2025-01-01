#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        int roll;
        float marks;
        int attendance;
        char name[50];
    }student;
    typedef struct topperstudent{
        student normal;
        int rank;
    }topper;

    topper hermione;
    hermione.rank = 2;
    hermione.normal.roll = 21;

    return 0;
}