#include <stdio.h>
#include <string.h>

struct student {int roll_no; 
                float percentage; 
                char name[15]; 
                char RESULT[15];
};

int main(){
    struct student STUDENT[3];
    struct student *ptr;

    ptr = &STUDENT[0];

    (*ptr).roll_no = 45;
    (*ptr).percentage = 25.78;
    strcpy((*ptr).name, "ROHIT");
    strcpy((*ptr).RESULT, "FAIL");

    printf("%d %.2f %s %s\n", (*ptr).roll_no, (*ptr).percentage, (*ptr).name, (*ptr).RESULT);

    ptr++;
    
    ptr->roll_no = 1;
    ptr->percentage = 98.653;
    strcpy(ptr->name, "RAMA");
    strcpy(ptr->RESULT, "PASS");
    printf("%d %.2f %s %s\n", ptr->roll_no, ptr->percentage, ptr->name, ptr->RESULT);
return 0;
}