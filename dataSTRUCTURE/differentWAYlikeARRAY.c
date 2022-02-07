#include <stdio.h>
#include <string.h>

struct student {int roll_no; 
                float percentage; 
                char name[15]; 
                char RESULT[15];
};

int main(){
    struct student harry = {45, 25.78, "ROHIT", "FAIL"},
louis = {1, 98.653, "RAMA", "PASS"};

    printf("%d %.2f %s %s\n", harry.roll_no, harry.percentage, harry.name, harry.RESULT);
    printf("%d %.2f %s %s\n", louis.roll_no, louis.percentage, louis.name, louis.RESULT);
return 0;
}