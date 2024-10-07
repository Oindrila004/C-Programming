#include<stdio.h>
int main()
{
    int age1, age2, age3;
    printf("Enter Ram's age: ");
    scanf("%d",&age1);
    printf("Enter Shyam's age: ");
    scanf("%d",&age2);
    printf("Enter Ajay's age: ");
    scanf("%d",&age3);

    if(age1 < age2 && age1 < age3){
        printf("Ram is the Youngest.");
    }
    else if(age2 < age1 && age2 < age3){
        printf("Shyam is the Youngest.");
    }
    else{
        printf("Ajay is the Youngest.");
    }
    return 0;
}