#include<stdio.h>

int main() {
    int num, pos, res;
    printf("Enter a Number : ");
    scanf("%d", &num);
    printf("Enter a postion to clear a bit : ");
    scanf("%d", &pos);
    res = num & ~(1<<pos);
    printf("%d", res);
}