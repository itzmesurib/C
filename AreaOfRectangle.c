#include<stdio.h>

typedef struct point {
    int x;
    int y;
} point;

typedef struct rectangle {
    point p1;
    point p2;
} rectangle;

int areaOfRectangle(rectangle r) {
    int length = (r.p1.y - r.p2.y);
    int breadth = (r.p2.x - r.p1.x);
    int area = length*breadth;
    printf("%d\n", r.p1.x);
    printf("%d\n", r.p2.x);
    printf("%d\n", r.p1.y);
    printf("%d\n", r.p2.y);
    return area;
}

int main() {

    point p1 = {3, 8};
    point p2 = {14, 2};
    rectangle r = {p1, p2};
    
    int res = areaOfRectangle(r);
    printf("%d\n", res);
}