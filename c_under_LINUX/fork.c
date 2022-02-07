#include <stdio.h>
#include <unistd.h>
#include <


int main(){
 
printf("before forking.\n");

fork();

printf("after forking.\n");
 
return 0;
} 