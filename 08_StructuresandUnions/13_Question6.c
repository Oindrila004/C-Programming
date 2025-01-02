//Create a structure person having attributes as age and weight.Access its structure variables using pointers.
#include<stdio.h>
typedef struct data{
    int age;
    float weight;
}person;
int main(){
    person first;
    // first.age = 45;
    // first.weight = 78.8;
    person* x = &first;
    //(*x).age = 34; //bracket() is mandatory.
    x->age = 56; //(*x).something = x->something
    printf("%d\n",first.age);
    return 0;
}