#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
        int roll;
        float marks;
        int attendance;
        char name[50];
    }student;
void fun(student p){
    printf("%d",p.attendance);
    return;
}
int main(){
    student hermione;
    hermione.attendance = 80;
    fun(hermione);

    return 0;
}