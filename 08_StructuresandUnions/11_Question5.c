//Create a structure to specify data on students with these attributes: Roll number, Name, Department, Course, Year of joining. Create 2 structure variables. Now, create a function to check if two students have the same department. Pass the two structure variable as input to this function.
#include<stdio.h>
#include<string.h>
typedef struct data{
    int roll;
    char name[50];
    char dept[50];
    char course[30];
    int join_year;
} student;
void compare(student p1, student p2){
    int result = strcmp(p1.dept, p2.dept);
    if(result == 0){
        printf("They are batchmates");
    }
    return;
}
int main(){
    student first;
    first.roll = 78;
    strcpy(first.name, "Harry Potter");
    strcpy(first.dept, "Computer Science");
    strcpy(first.course, "BCA");
    first.join_year = 2022;

    student second;
    second.roll = 67;
    strcpy(second.name, "Draco Malfoy");
    strcpy(second.dept, "Computer Science");
    strcpy(second.course, "B.Tech");
    second.join_year = 2022;

    compare(first,second);
    return 0;
}