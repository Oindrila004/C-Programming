//A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold records of 20 such cricketer and then write a program to read those records.
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct record{
        char name[50];
        int age;
        int no_of_testMatch;
        int runs;
    }data;

    data player[6];
    strcpy(player[0].name, "Draco Malfoy");
    player[0].age = 34;
    player[0].no_of_testMatch = 95;
    player[0].runs = 1457;

    strcpy(player[1].name, "Rubeus Hagrid");
    player[1].age = 67;
    player[1].no_of_testMatch = 78;
    player[1].runs = 1345;

    strcpy(player[2].name, "Albus Dumbledore");
    player[2].age = 150;
    player[2].no_of_testMatch = 100;
    player[2].runs = 7890;

    strcpy(player[3].name, "McGonagal");
    player[3].age = 90;
    player[3].no_of_testMatch = 56;
    player[3].runs = 1189;

    strcpy(player[4].name, "Lord Voldemort");
    player[4].age = 96;
    player[4].no_of_testMatch = 89;
    player[4].runs = 1880;

    strcpy(player[5].name, "Severus Snape");
    player[5].age = 78;
    player[5].no_of_testMatch = 97;
    player[5].runs = 1987;

    for(int i=0; i<6; i++){
        printf("Name: %s\n",player[i].name);
        printf("Age: %d\n",player[i].age);
        printf("Number of test matches played: %d\n",player[i].no_of_testMatch);
        printf("Total run scored: %d\n",player[i].runs);
    }  
    return 0;
}