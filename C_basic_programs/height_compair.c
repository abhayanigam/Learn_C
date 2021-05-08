/*You are transporting some boxes through a tunnel, 
where each box is a parallelepiped, and is characterized by its length, 
width and height.
The height of the tunnel 41 feet and the width can be assumed to be infinite. 
A box can be carried through the tunnel only if its height is strictly less than the tunnel's height.
Find the volume of each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.

Sample Input :-

4
5 5 5
1 2 40
10 5 41
7 2 42
Sample Output :-

125
80

Explanation 0

The first box is really low, only 5 feet tall, 
so it can pass through the tunnel and its volume is 5*5*5=125.

The second box is sufficiently low, its volume is 1*2*40 =80.

The third box is exactly 41 feet tall, so it cannot pass. The same can be said about the fourth box.
*/
#include <stdio.h>
struct size{
  int l;
  int w;
  int h;
};
int main()
{
  int s,i,multi,k=41;
  printf("Enter the size :");
  scanf("%d",&s);
  struct size size1[s];

  for (i = 0; i < s; i++) {
    printf("\n");
    printf("Enter the lenght :");
    scanf("%d",&size1[i].l);
    printf("Enter the widht :");
    scanf("%d",&size1[i].w);
    printf("Enter the hight :");
    scanf("%d",&size1[i].h);
  }
  for (int j = 0; j < s; j++) {
    if (size1[j].h<k) {
      multi = size1[j].l*size1[j].w*size1[j].h;
    }
    else{
      break;
    }
    printf("%d\n",multi);
  }
}
