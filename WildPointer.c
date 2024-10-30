#include<stdio.h>

int main() {
    int *p; //Wild Pointer
    *p = 10;    //It points to an some orbitary memory location
    printf("%d", p);
}