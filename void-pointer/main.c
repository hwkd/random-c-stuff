#include <stdio.h>
#include <stdlib.h>

int main() {
    void *p = malloc(sizeof(int));
    *(int*)p = 123;
    printf("%d\n", *(int*)p);

    return 0;
}

