#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        int roll;
        float marks;
        int attendance;
        char name[50];
    }student;

    student arr[3];
    arr[0].attendance = 67;
    arr[0].marks = 89.9;
    arr[0].roll = 61;
    strcpy(arr[0].name, "Harry Potter");

    arr[1].attendance = 78;
    arr[1].marks = 98.7;
    arr[1].roll = 23;
    strcpy(arr[1].name, "Hermione Granger");

    arr[2].attendance = 65;
    arr[2].marks = 78.8;
    arr[2].roll = 56;
    strcpy(arr[2].name, "Ronald Weasley");

    for(int i=0; i<3; i++){
        printf("Name: %s\n",arr[i].name);
        printf("Roll Number: %d\n",arr[i].roll);
        printf("Attendance: %d\n",arr[i].attendance);
        printf("Marks: %f\n",arr[i].marks);
    }

    return 0;
}