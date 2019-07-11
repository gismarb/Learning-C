#include <stdio.h>
#include <stdlib.h>

int calcula(int x);

void main() {

    int a, b, c;
    char d;

    a = 1;
    b = 2;
    c = 3;
    d = 'A';

    a += b * c;
    d = (a > 7) ? d - 1 : d + 1;
    b = calcula(b);
    c = calcula(calcula(a));
    a = c++;

    printf("\n\n%d - %d - %d - %c\n\n", a, b,  c, d);

}

int calcula(int x) {

    int i;
    if((x = x * 2) > 5)
        return (x + 3);

    for(i = 0; i < 10; i++) {
        if(i < 5)
            continue;

        if(i > 8)
            break;

        x += 2;
    }

    return(x);
}
