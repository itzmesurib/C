#include<stdio.h>

int main() {
    char s1[] = "Surendra Babu";
    char s2[100];
    for(int i=0; i!='\0'; i++) {
        s2[i] = s1[i];
        printf("%c\n", s1[i]);
    }
    printf("%s", s2);
}