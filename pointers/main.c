#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *c = b;
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(c + i));
    }
    return 0;
}
