#include<stdio.h>
#include<string.h>

int main(){
    // char name[] = "Oindrila";
    // int length = strlen(name);
    // printf("Length is: %d\n",length);

    // char oldstr[] = "Hello";
    // char newstr[] = "World";
    // strcpy(newstr, oldstr);
    // puts(newstr);

    // char firststr[100] = "Hello ";
    // char secondstr[] = "World";
    // strcat(firststr, secondstr);
    // puts(firststr);

    char firststr[] = "Oindrila";
    char secondstr[] = "Majumder";
    printf("%d",strcmp(firststr, secondstr));
    return 0;
}