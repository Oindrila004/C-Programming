//Create a structure type 'Person' with name, salary, and age as its attributes. Declare and initialize 2 variables for this. Print the name of first person and age of the other.
#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        int salary;
        int age;
    }person1, person2;

    strcpy(person1.name, "Oindrila Majumder");

    printf("%s\n",person1.name);

    printf("Enter your age: ");
    scanf("%d",&person2.age);

    printf("%d",person2.age);

    return 0;
}