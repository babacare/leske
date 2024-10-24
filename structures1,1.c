/*
MAINA WANGUI
CT101/G/23707/24
ASSIGNMENT ON STRUCTURES
*/

#include <stdio.h>
#include <string.h>

struct books{
    char title[30], author[30];
    int publicationYear; 
    long int ISBN[30];
    float price;
}book1;

int main() {
    
    strcpy(book1.title, "Introduction to C Progamming");
    strcpy(book1.author, "John Smith");
    book1.publicationYear = 2022;
    book1.ISBN = 9780131103627;
    book1.price = 49.99;

    printf("Book Title: %s \n", book1.title);
    printf("Author: %s \n", book1.author);
    printf("Year of Publication: %d \n", book1.publicationYear);
    printf("ISBN: %d \n", book1.ISBN);
    printf("Price: %2f \n", book1.price);

    return 0;
}