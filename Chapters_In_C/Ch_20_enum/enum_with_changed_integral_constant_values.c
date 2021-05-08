//enum with changed integral constant values
#include<stdio.h>

enum day { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} ;

int main(){
   
   enum day today;
   
   today = tuesday ;
   
   printf("\ntoday = %d ", today) ;
   
}