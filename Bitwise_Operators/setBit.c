#include<stdio.h>

int main() {
    int num, pos;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Enter a postion to set a bit : ");
    scanf("%d", &pos);
    int res = num | (1<<pos);
    printf("Result is : %d", res);
}