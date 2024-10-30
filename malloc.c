#include<stdio.h>
#include<stdlib.h>

//Malloc stands for Memory Allocation
int main() {
    int i, n;
    printf("Enter the number of integers : ");
    scanf("%d", &n);
    int *ptr = (int*)malloc(n*sizeof(int));     //It accepts only one argument of dataspace

    if(ptr == NULL) {
        printf("Memory not available");
        exit(1);
    }
    for(i=0; i<n; i++) {
        printf("Enter an integer : ");
        scanf("%d", ptr+i);
    }
    for(i=0; i<n; i++) {
        printf("%d", *(ptr+i));
    }

}