#include <stdio.h>

int addTen(int *num) {
    
    *num = *num + 10;
    
    return *num;
}

int main() {

    int a = 10;
    
    addTen(&a);
    
    printf("%d", a);

    return 0;
}