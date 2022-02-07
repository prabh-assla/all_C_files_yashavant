#include <stdio.h>

typedef struct employee{
    int rank1_to5;
    char name[15];
} emp;

typedef struct additionals{
    int RED_coding_CARDS;
    char degree[15];
    emp e1;
} add;

int main(){
    add a1, a2;
    a1.RED_coding_CARDS = 7;
    a1.e1.rank1_to5 = 4;
    a2.e1.rank1_to5 = 10;
    printf("%d %d %d\n", a1.RED_coding_CARDS, a1.e1.rank1_to5, a2.e1.rank1_to5);
return 0;
}