#include <stdio.h>
#include <string.h>

struct student {int roll_no; 
                float percentage; 
                char name[15]; 
                char RESULT[15];
};

int main(){
    struct student STUDENT[100];

    STUDENT[0].roll_no = 45;
    STUDENT[0].percentage = 25.78;
    strcpy(STUDENT[0].name, "ROHIT");
    strcpy(STUDENT[0].RESULT, "FAIL");
    
    STUDENT[1].roll_no = 1;
    STUDENT[1].percentage = 98.653;
    strcpy(STUDENT[1].name, "RAMA");
    strcpy(STUDENT[1].RESULT, "PASS");

    printf("%d %.2f %s %s\n", STUDENT[0].roll_no, STUDENT[0].percentage, STUDENT[0].name, STUDENT[0].RESULT);
    printf("%d %.2f %s %s\n", STUDENT[1].roll_no, STUDENT[1].percentage, STUDENT[1].name, STUDENT[1].RESULT);
return 0;
}