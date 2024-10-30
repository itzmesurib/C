#include<stdio.h>

int main() {
    char c = 'S';

    if(c=='A') {
        goto A;
    }
    else {
        goto B;
    }

    A:
        printf("Suri");
        return 0;
    B:
        printf("Bye");
}