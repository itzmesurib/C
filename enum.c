#include<stdio.h>

int main() {

    enum days {
        Sunday = 100,
        Monday = 101,
        Tuesday = 102,
        Wednesday = 103,
        Thursday = 104,
        Friday = 105,
        Saturday = 106
    };

    enum days day = Friday;
    printf("----------\n");
    printf("%d\n", day);
    printf("----------\n");
}