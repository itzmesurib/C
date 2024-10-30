#include<stdio.h>

int main() {
    int *p;
    int num = 100;
    p = &num;
    int *q = &p;
    printf("Address of %d is %x\n", num, p);
    printf("Address of %d is %d\n", p, q);
}