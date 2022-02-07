#include <stdio.h>

#pragma pack(1)
typedef struct library{
    int book_no;
    char book_name;
} book;
#pragma pack()

int main(){
    book b;
    printf("%u %u\n", &b.book_no, &b.book_name);
return 0;
}