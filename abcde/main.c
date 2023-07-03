#include <stdio.h>

int power(int base, int exp);
int reverse_int(int num);

int main() {
    // Find value for abcde where 4 * abcde = edcba
    for (int i = 10000; i < 25000; i++) {
        if (i * 4 == reverse_int(i)) {
            printf("%d * 4 = %d\n", i, reverse_int(i));
        }
    }

    return 0;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int reverse_int(int num) {
    int n = num;
    int num_of_digits = 0;
    while (n > 0) {
        n /= 10;
        num_of_digits++;
    }
    int result = 0;
    for (int i = num_of_digits - 1; i >= 0; i--) {
        result += (num % 10) * power(10, i);
        num /= 10;
    }
    return result;
}
