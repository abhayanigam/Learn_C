//enum with defferent integral constant values
#include<stdio.h>

enum threshold {low = 40, normal = 60, high = 100} ;

int main(){
   
   enum threshold status;
   
   status = low ;
   
   printf("\nYou are at %d state. Work hard to improve!!", status) ;
   
}