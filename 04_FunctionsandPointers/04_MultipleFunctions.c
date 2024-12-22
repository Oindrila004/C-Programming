#include<stdio.h>
void Japan(){
    printf("You are in Japan\n");
}
void England(){
    printf("You are in England\n");
    Japan();
}
void India(){
    printf("You are in India\n");
    England();
}
int main(){
    printf("You are in main\n");
    India();
}