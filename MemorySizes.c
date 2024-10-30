#include<stdio.h>
#include<conio.h>

int main() {

    char myChar;
    int myInt;
    float myFloat;
    double myDouble;

    printf("%lu\n", sizeof(myChar));
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));

    return 0;
}