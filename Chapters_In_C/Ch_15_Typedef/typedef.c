#include <stdio.h>
#include <string.h>

typedef struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
} Book;

int main() {
  Book book;

  strcpy(book.title, "C Programming");
  strcpy(book.author, "Imam Sutono");
  strcpy(book.subject, "C Programming Tutorial");
  book.book_id = 6495407;

  printf("Book 1 title : %s\n", book.title);
  printf("Book 1 author : %s\n", book.author);
  printf("Book 1 subject : %s\n", book.subject);
  printf("Book 1 book_id : %d\n", book.book_id);
  
  return 0;
}