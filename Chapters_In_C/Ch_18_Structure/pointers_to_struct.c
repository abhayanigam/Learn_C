#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

void printBook(struct Books *book);

int main() {
  struct Books Book1;  
  struct Books Book2;
  
  // Book1 spesification
  strcpy(Book1.title, "C Programming");
  strcpy(Book1.author, "Imam Sutono");
  strcpy(Book1.subject, "C Programming Tutorial");
  Book1.book_id = 6495407;

  // Book2 spesification
  strcpy(Book2.title, "Learn C is fun");
  strcpy(Book2.author, "Mustofa");
  strcpy(Book2.subject, "Let's learn C");
  Book2.book_id = 6495407;

  // print Book1 info
  printBook(&Book1);

  // print Book2 info
  printBook(&Book2);

  return 0;
}

void printBook(struct Books *book) {
  printf("Book title: %s\n", book->title);
  printf("Book author: %s\n", book->author);
  printf("Book subject: %s\n", book->subject);
  printf("Book book_id: %d\n\n", book->book_id);
}