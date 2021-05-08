//enum with changed integral constant values

#include<stdio.h>

enum day {Monday, Tuesday, Wednesday, Thursday = 10, Friday, Saturday, Sunday} ;

int main(){
   
   enum day today;
   
   today = tuesday ;
   
   printf("\ntoday = %d ", today) ;
   
   today = saturday ;
   
   printf("\ntoday = %d ", today) ;
   
}