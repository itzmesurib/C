#include<stdio.h>

#pragma pack(1) //Structure packing(by default int uses structure padding)
struct store {
    double price;
    union {
        struct {
            char *title;
            char *author;
            int num_pages;
        } book;

        struct {
            int color;
            int size;
            char *design;
        } shirt;
    } item;
};

int main() {
    struct store s;
    s.item.book.title = "Maths";
    s.item.book.author = "Ramanujan";
    s.item.book.num_pages = 99;
    s.price = 200;
    printf("Book title is : %s\n", s.item.book.title);
    printf("Size of the structure s is : %ld\n", sizeof(s));
    printf("Size of the book title is : %ld\n", sizeof(s.item.book.title));
    printf("Size of the book author is : %ld\n", sizeof(s.item.book.author));
    printf("Size of the book number of pages is : %ld\n", sizeof(s.item.book.num_pages));
    printf("Size of Surendra name is : %ld\n", sizeof("Surendra"));
}