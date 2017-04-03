#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


int main(){

char * cptr = "hello";
char c2[] = "hello";

printf("string test1: %s\n", cptr);
printf("string test2: %s\n", c2);


return 0;//cuz reasons
}
