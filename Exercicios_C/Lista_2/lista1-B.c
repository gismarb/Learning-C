#include <stdio.h>
#include <stdlib.h>

void main() {

    int a, b, *c;

    a = 4;
    b = 3;
    c = &a;
    *c = *c +1;
    c = &b;
    b = b + 4;

    printf("\n\n%d %d %d\n\n", a, b, *c);

}
