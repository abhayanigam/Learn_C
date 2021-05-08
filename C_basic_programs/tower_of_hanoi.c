#include <stdio.h>
void tower_of_hanoi(int n , char BEG ,char AUX , char END){
    if(n>0){
        tower_of_hanoi(n-1,BEG,END,AUX);
        printf("%c to %c\n",BEG,END);
        tower_of_hanoi(n-1,AUX,BEG,END);
    }
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','B','C');
}

/*suppose n =3
then the output will be :-

Enter the number :3
A to C
A to B
C to B
A to C
B to A
B to C
A to C

*/