#include <stdio.h>
#include <string.h>

// struct allow to combine data items of different data types
struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

int main() {
  struct Books Book1; // declare Book1 of type Book
  struct Books Book2; // declare Book2 of type Book

  // Book1 spesification
  strcpy(Book1.title, "C Programming");
  strcpy(Book1.author, "Imam Sutono");
  strcpy(Book1.subject, "C Programming Tutorial");
  Book1.book_id = 6495407;

  // Book2 spesification
  strcpy(Book2.title, "Learn C is fun");
  strcpy(Book2.author, "Samsul Arifin");
  strcpy(Book2.subject, "Let's learn C");
  Book2.book_id = 6495700;

  // print Book1 info
  printf("Book 1 title : %s\n", Book1.title);
  printf("Book 1 author : %s\n", Book1.author);
  printf("Book 1 subject : %s\n", Book1.subject);
  printf("Book 1 book_id : %d\n", Book1.book_id);

  // print Book2 info
  printf("Book 2 title : %s\n", Book2.title);
  printf("Book 2 author : %s\n", Book2.author);
  printf("Book 2 subject : %s\n", Book2.subject);
  printf("Book 2 book_id : %d\n", Book2.book_id);
  
  return 0;
}