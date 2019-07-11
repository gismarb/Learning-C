#include <stdio.h>
#include <stdlib.h>

void main() {
    
    int a, b, *c;

    a = 3;
    b = 4;
    c = &a;
    b++;
    *c = a + 2;
    printf("\n\n%d %d\n\n", a, b);

}
