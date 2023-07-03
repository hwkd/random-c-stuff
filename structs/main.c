#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char mode;           // 1 byte + 3 padding bytes
    int arrival_time;    // 4 bytes
    int journey;         // 4 bytes
    float fare;          // 4 bytes
    float discount;      // 4 bytes
    int transaction_no;  // 4 bytes
    char from[32];       // 32 bytes
    char to[32];         // 32 bytes
} Trip;                  // 88 bytes in total per instance

void timeString(char *time, int timestamp) {
    int hour, min;
    hour = timestamp / 3600;
    min = (timestamp % 3600) / 60;
    sprintf(time, "%d:%d", hour, min);
}

int main() {
    Trip t1 = {
        .mode = 'F',
        .from = "Circular Quay, No. 4 Wharf",
        .to = "Taronga Zoo Ferry Wharf",
        .arrival_time = 31560,
        .journey = 3,
        .fare = 6.43,
        .discount = -2,
    };

    printf("Mode: %c\n", t1.mode);
    printf("From: %s\n", t1.from);
    printf("To: %s\n", t1.to);

    char *time = malloc(sizeof(char) * 6);
    timeString(time, t1.arrival_time);
    printf("Arrived: %s\n", time);
    free(time);
    time = NULL;

    printf("Journey of the week: %d\n", t1.journey);
    printf("Fare: %.2f\n", t1.fare);
    printf("Discount: %.2f\n", t1.discount);

    return 0;
}
