#include "header.h"
#include <stdio.h>

int main()
{
    point_t p;
    p.x = 1;
    p.y = 2;
    printf("%d\n", do_stuff(&p));
    return 0;
}
