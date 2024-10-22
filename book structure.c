// Structure program
#include <stdio.h>
#include <string.h>

struct book{
    char title[30],author[30],ISBN[13];
    int publication_year;
    float price;
}book1;
int main() {
    strcpy(book1.title,"Introduction to C programming");
    strcpy(book1.author,"John Smith");
    strcpy(book1.ISBN,"9780131103627");
    book1.publication_year = 2022;
    book1.price = 49.99;
    
    printf("Title:%s\n",book1.title);
    printf("Author:%s\n",book1.author);
    printf("ISBN:%s\n",book1.ISBN);
    printf("Publication Year:%d\n",book1.publication_year);
    printf("Price:%.2f\n",book1.price);
   
    return 0;
}