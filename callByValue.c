#include<stdio.h>


void doubleValue(int num) {
    num = num + num;
    printf("The value of num inside the function is %d\n", num);
}

int main() {
    int num = 100;
    doubleValue(num);
    printf("The value of num outside of the function is %d\n", num);
}

