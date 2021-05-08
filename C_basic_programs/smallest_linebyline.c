/*
You are given n triangles, specifically, their sides a,b  and c.
Print them in the same style but sorted by their areas from the smallest one to the largest one.
It is guaranteed that all the areas are different.
The best way to calculate a volume of the triangle with sides a, c and c is Heron's formula:
*/
#include <stdio.h>
#include <math.h>
struct triangle{
  int a,b,c;
};
int main()
{
  int i,j,k,size,p=0,l,m,n;
  printf("Enter the size :");
  scanf("%d",&size);
  int s[size];
  typedef struct triangle tri;
  tri triangle1[size];
  for (i = 0; i < size; i++) {
    printf("\n");
    printf("Enter the value of a:");
    scanf("%d",&triangle1[i].a);
    printf("Enter the value of b:");
    scanf("%d",&triangle1[i].b);
    printf("Enter the value of c:");
    scanf("%d",&triangle1[i].c);
  }
  for (j = 0; j < size; j++) {
    p = (triangle1[j].a + triangle1[j].b + triangle1[j].c )/2;
    s[j] = sqrt(p * (p-triangle1[j].a) * (p-triangle1[j].b) * (p-triangle1[j].c));
    printf("%d\n",s[j]);
  }
  l = s[0];
  for (k = 0; k < size; k++) {
    if (s[k]<l) {
      l=s[k];
    }
  }
  m = s[0];
  for (k = 1; k < size; k++) {
    if (s[k]<m && s[k]>l) {
      m=s[k];
    }
  }
  n = s[0];
  for (k = 2; k < size; k++) {
    if (s[k]<n && s[k]>m) {
      n=s[k];
    }
  }
  printf("\n");
  printf("1st:%d  2nd:%d  3rd:%d\n",l,m,n);
  printf("\n");
  printf("1st : %d %d %d\n",triangle1[2].a ,triangle1[2].b,triangle1[2].c);
  printf("2nd : %d %d %d\n",triangle1[1].a ,triangle1[1].b,triangle1[1].c);
  printf("3rd : %d %d %d\n",triangle1[0].a ,triangle1[0].b,triangle1[0].c);
}
