/*
MAINA WANGUI
CT101/G/23707/24
ASSIGNMENT ON STRUCTURES(wITH INPUT PROMPTS)
*/

#include <stdio.h>
#include <string.h>

struct books{
    char title[30], author[30];
    int publicationYear, ISBN[30];
    float price;
}book1;

int main() {
   
    printf("Please enter book title: ");
    scanf("%s", &book1.author);
    printf("Please enter author's name: ");
    scanf("%s", &book1.author);
    printf("Please enter the publication year: ");
    scanf("%d", &book1.publicationYear);
    printf("Please enter book ISBN: ");
    scanf("%d", book1.ISBN);
    printf("Please enter book price: ");
    scanf("%f", book1.price);

    printf("Book Title: %s \n", book1.title);
    printf("Author: %s \n", book1.author);
    printf("Year of Publication: %d \n", book1.publicationYear);
    printf("ISBN: %d \n", book1.ISBN);
    printf("Price: %2f \n", book1.price);


    return 0;
}