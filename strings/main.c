#include <stdio.h>

int main() {
    char *s = "helloworld";

    for (char *c = s; *c != '\0'; c++) {
        printf("%c\n", *c);
    }

    return 0;
}