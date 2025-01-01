//Create a structure type 'book' with name, price, and number of pages as its attributes
#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[20];
        float price;
        int pages;
    } book1, book2, book3;

    strcpy(book1.name, "Sherlock Holmes");
    book1.price = 500;
    book1.pages = 600;

    printf("%s\n",book1.name);
    printf("%f\n",book1.price);
    printf("%d\n",book1.pages);
    return 0;
}