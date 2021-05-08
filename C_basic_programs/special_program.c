#include <stdio.h>
int main()
{
    printf("%c \n", 5["GeeksQuiz"]);
    //the no. 5 will skip the 5 letters and prints the nxt letter which is Q.
    printf("%c \n", "GeeksQuiz"[5]);

    //when we add 5 in a string it will skip 5 letters and show the result after 5 letters which is Quiz.
    printf(5 + "GeeksQuiz\n");
    
    //this will print GeeksQuiz with total no. of letter so the finale output is GeeksQuiz 9.
    int x = printf("GeeksQuiz");
   	printf(" %d", x);

    return 0;
}