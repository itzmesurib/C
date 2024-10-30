#include<stdio.h>
#include<stdlib.h>

//calloc stands for clear allocation
int main() {
    int *ptr = (int*)calloc(10, sizeof(int));   //It accepts both no.of blocks and size of datatype
    for(int i=0; i<10; i++) {
        *(ptr+i) = (i*10);
    }
    for(int i=0; i<10; i++) {
        printf("%d\n", *(ptr+i));
    }
}