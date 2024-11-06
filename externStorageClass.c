#include<stdio.h>
#include "support.c"

int main() {
    extern int num;
    printf("The value of num is %d\n", num);

    extern int sharedValue;
    printf("The sharedValue is %d\n", sharedValue);
}


int num = 100;
