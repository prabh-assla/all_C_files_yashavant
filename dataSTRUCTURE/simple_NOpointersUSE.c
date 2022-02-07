#include <stdio.h>
#include <string.h>

struct student {int roll_no; 
                float percentage; 
                char name[15]; 
                char RESULT[15];
};

int main(){
    struct student s1, s2;

    s1.roll_no = 45;
    s1.percentage = 25.78;
    strcpy(s1.name, "ROHIT");
    strcpy(s1.RESULT, "FAIL");
    
    s2.roll_no = 1;
    s2.percentage = 98.653;
    strcpy(s2.name, "RAMA");
    strcpy(s2.RESULT, "PASS");

    printf("%d %.2f %s %s\n", s1.roll_no, s1.percentage, s1.name, s1.RESULT);
    printf("%d %.2f %s %s\n", s2.roll_no, s2.percentage, s2.name, s2.RESULT);
return 0;
}