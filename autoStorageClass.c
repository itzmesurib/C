#include<stdio.h>

// auto int num = 200; This is an Error

//auto can be declared with in function or block


int main() {
    auto int num = 100;
    {
        auto int num = 50;
        printf("Block level value of num : %d\n", num);
    }
    printf("Function level value of num : %d\n", num);
}


// Default value = garbage value
// scope = block/function
// lifetime = with in block/function
// storage = stack
