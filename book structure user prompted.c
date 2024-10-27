// Structure program user prompted
#include <stdio.h>
#include <string.h>

struct book{
    char title[31],author[31],ISBN[14];
    int publication_year;
    float price;
}book1;
int main() {
    printf("Enter the title:");
    fgets(book1.title, sizeof(book1.title), stdin);
    book1.title[strcspn(book1.title, "\n")] = 0;
    
    printf("Enter the author's name:");
    fgets(book1.author, sizeof(book1.author),stdin);
    book1.author[strcspn(book1.author, "\n")] = 0;
    
    printf("Enter the ISBN:");
    fgets(book1.ISBN, sizeof(book1.ISBN),stdin);
     book1.ISBN[strcspn(book1.ISBN, "\n")] = 0; 
    
    printf("Enter the publication year:");
    scanf("%d",&book1.publication_year);
    
    printf("Enter the price:");
    scanf("%f",&book1.price);
    
    printf("Title:%s\n",book1.title);
    printf("Author:%s\n",book1.author);
    printf("ISBN:%s\n",book1.ISBN);
    printf("Publication Year:%d\n",book1.publication_year);
    printf("Price:%.2f\n",book1.price);
   
    return 0;
}