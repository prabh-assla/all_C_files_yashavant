#include <stdio.h>
#include <string.h>

struct job{
    int roll_no;
    char name[15];
    float salary_inTHOUSANDS;
};

void JOBSIFY(struct job *tip){
    (*tip).roll_no = 16;
    strcpy(tip->name, "STUART");
    (*tip).salary_inTHOUSANDS = 111.8;
}

int main(){
    struct job j1 = {12, "HENRY", 13.89};
    printf("\n%d %s %.2f\n", j1.roll_no, j1.name, j1.salary_inTHOUSANDS);
    JOBSIFY(&j1);
    printf("\n%d %s %.1f\n", j1.roll_no, j1.name, j1.salary_inTHOUSANDS);
return 0;
}