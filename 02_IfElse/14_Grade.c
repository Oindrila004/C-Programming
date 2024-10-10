#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your percentage of marks: ");
    scanf("%d",&marks);

    if(marks >= 91 && marks <= 100){
        printf("Excellent");
    }
    else if(marks >=81){
        printf("Very Good");
    }
    else if(marks >= 71){
        printf("Good");
    }
    else if(marks >=61){
        printf("Can do better");
    }
    else if(marks >= 51){
        printf("Below Average");
    }
    else if(marks >=41){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
}