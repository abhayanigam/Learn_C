#include <stdio.h>
//#pragma pack(1)
//if we want to save memory then cpu cycle is wasted (then we use struct packing *#pragma pack(1) ).
struct abc{
    char a;//1 bytes
    int b;//4 bytes
    char c;//1 bytes
    //int b;
};
//if we want to save cpu cycle then memory is wasted (then we use struct padding).
int main()
{
    struct abc c;
    printf("size is %d\n",sizeof(c));
}
