#include <stdio.h>

int main() {
    int numbers[3][10] ={
            {2, 1, 2, 3, 4, 5, 6, 7, 7, 8},
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            {11, 12, 13,14, 15, 16, 17, 18, 19, 20},
    };

    for (int i = 0; i < 10; ++i) {
        printf("\n----------- Student %d details ----------- \n", i);
        int totalMarks = 0;
        int averageMarks = 0;
        for (int j = 0; j < 3; ++j) {
            int marks = numbers[j][i];
            printf("Student %d :  marks in subject %d = %d\n", i, j, marks);
            totalMarks = totalMarks + marks;
        }
        averageMarks = totalMarks/3;
        printf("Student %d: total marks %d\n",i, totalMarks);
        printf("Student %d: average marks %d\n",i, averageMarks);
    }
}