#include<stdio.h>

int main() {
    //One Dimensional Array
    int one[10];
    for(int i=0; i<(sizeof(one)/sizeof(one[0])); i++) {
        printf("%d - %d\n", one[i], i);
    }

    //Two Dimensional Array
    int two[2][2] = {1, 2, 3, 4};
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d\n", two[i][j]);
        }
    }

    //Three Dimensional Array
    int three[3][3][3] = {1, 2, 3, 4, 5};
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<3; k++) {
                printf("%d\n", three[i][j][k]);
            }
        }
    }

}