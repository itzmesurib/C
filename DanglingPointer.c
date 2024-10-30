#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));   
    free(ptr);  //After freed also it pointe some non-existing memory location.
    ptr = NULL; //This is solution to avoid Dangling pointers.
    printf("%d", ptr);
}