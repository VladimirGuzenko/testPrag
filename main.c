#include <stdio.h>
#include <stdlib.h>
#pragma pack(push,1)
struct some_structure {
int some_field;
char data[0];
};
#pragma pack(pop)
int main()
{
    int i=0;
    struct some_structure s;
    for (;i<1000 ;i++)
        printf("%c",s.data[i]);
    printf("Hello world!\n");
    return 0;
}
