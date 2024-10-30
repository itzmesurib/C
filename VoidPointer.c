#include<stdio.h>

int main() {
    void *ptr;  //We can assign any datatype value for this void pointer like int, float,etc..
    int num = 10;
    ptr = &num;   //Initialize int value to void pointer
    printf("%d\n", *(int*)ptr); //TypeCasting
    printf("%d\n", ptr);
}