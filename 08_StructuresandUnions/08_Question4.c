#include<stdio.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;

    date record[2];
    for(int i=0; i<2; i++){
        scanf("%d\n",&record[i].date);
        scanf("%d\n",&record[i].month);
        scanf("%d",&record[i].year);
    }
    if(record[0].date == record[1].date){
        if(record[0].month == record[1].month){
            if(record[0].year == record[1].year){
                printf("Equal");
            }
        }
    }
    else{
        printf("Unequal");
    }
    return 0;
}