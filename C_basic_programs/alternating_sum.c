#include <stdio.h>
#include <string.h>
int main()
{
  int no,i,sum=0,sum1=0;
  printf("Enter the size :");
  scanf("%d",&no);
  int arr[no];
  for (i = 0; i < no; i++) {
    printf("Enter the elements :");
    scanf("%d",&arr[i]);
  }
  //method to sum altenate no in an array.
  for (i = 0; i < no; i+=2) {
    sum +=arr[i];
  }
  printf("sum is %d\n",sum);
  for (i = 1; i < no; i+=2) {
    sum1 +=arr[i];
  }
  printf("sum is %d\n",sum1);
}
/*You are given an array of integers,marks, denoting the marks scored by students in a class.
The alternating elements mark0,marks2 ,marks4  and so on denote the marks of boys.
Similarly,marks1,marks3,marks4 and so on denote the marks of girls.
The array name,marks works as a pointer which stores the base address of that array. 
In other words, marks contains the address where  is stored in the memory.
For example, let marks = [3,2,5] and marks stores.
explanantion 
marks = [3, 2, 5] and  gender= b.
So, marks0+marks2 = 3+5=8.

marks = [1, 2, 3, 4, 5] and gender=g.
So,  sum = marks1+marks2 =2+5=8.
*/

#include <stdio.h>
#include <string.h>
int marks(int no,char ch){
  int arr[no],sum=0,i;
  for (i = 0; i < no; i++) {
    printf("Enter the elements :");
    scanf("%d",&arr[i]);
  }
  //method to sum altenate no in an array.
  if (ch == 'b') {
    for (i = 0; i < no; i+=2) {
      sum +=arr[i];
    }
  }
  else{
    for (i = 1; i < no; i+=2) {
      sum +=arr[i];
    }
    printf("sum is %d\n",sum);
  }
  return sum;
}
int main()
{
  int no,i;
  char ch;
  printf("Enter the size :");
  scanf("%d",&no);
  printf("Enter the character :");
  scanf(" %c",&ch);
  marks(no,ch);
}
