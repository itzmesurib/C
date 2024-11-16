#include<stdio.h>

int StringLength(char st[]) {
    int count = 0;
    for(int i=0; st[i]!='\0'; i++) {
        count++;
    }
    return count;
}

char* reverseString(char st[]) {
    int length = StringLength(st);
    for(int i=0; i<(length/2); i++) {
        int j = length-i-1;
        char temp = st[i];
        st[i] = st[j];
        st[j] = temp;
    }
    return st;
}

int main() {
    char st[] = "Surendra Babu";
    printf("%s", reverseString(st));
}