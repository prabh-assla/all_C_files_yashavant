#include <stdio.h>

int main(){
    FILE *t4;
    t4 = fopen("t298.txt", "r");

char city[10];

while(fgets(city, 9, t4) != 0)
    printf("%s", city);

printf("\n123456789009876543212345678900987654321\n\a");
fclose(t4);

return 0;
}