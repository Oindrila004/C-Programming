#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
        int roll;
        float marks;
        int attendance;
        char name[50];
    }student;

int main(){
    student harry;
    student* x = &harry;
    printf("%p\n",x);

    return 0;
}