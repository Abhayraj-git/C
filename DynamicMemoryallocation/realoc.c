#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(2 * sizeof(int)); 

    p[0] = 10;
    p[1] = 20;

    
    p = realloc(p, 4 * sizeof(int));

    p[2] = 30;
    p[3] = 40;

    printf("%d %d %d %d", p[0], p[1], p[2], p[3]);

    free(p);
    return 0;
}
