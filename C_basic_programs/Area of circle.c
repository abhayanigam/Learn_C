#include <stdio.h>
#define pi 3.1415
int main()
{
    int r = 5;
    float area, circum;
    area = pi * r * r;
    circum = 2 * pi * r;
    printf("Area of circle is : %f\n", area);
    printf("Circum of circle is : %f", circum);
}
