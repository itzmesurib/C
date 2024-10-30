#include<stdio.h>
#include<stdarg.h>

int add_num(int n, ...) {
    va_list nums;
    va_start(nums, n);
    int total = 0;
    for(int i=0; i<n; i++) {
        total = total + va_arg(nums, int);
    }
    return total;
}

int main() {
    int res = add_num(4, 1, 2, 3, 4);
    printf("%d", res);
}