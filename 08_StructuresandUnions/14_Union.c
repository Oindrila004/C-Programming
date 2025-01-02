#include<stdio.h>
#include<string.h>
typedef union student{
        int roll;
        float marks;
        int attendance;
        //char name[50];
    }student;

int main(){
    student harry;
    harry.roll = 78;
    harry.marks = 89.7;
    harry.attendance = 65;
    //strcpy(harry.name, "Harry Potter");

    printf("%d\n",harry.roll);
    printf("%f\n",harry.marks);
    printf("%d\n",harry.attendance);
    //printf("%s\n",harry.name);

    return 0;
}
//union can acces only one variable at a time.