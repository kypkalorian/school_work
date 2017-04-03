//defs go here

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


struct process{
    int arrivalTime;
    int processingTime;
    int waitTime;
    int completeTime;
    int firstRunTime;
};

int converter(char * myString);
char* strSplit(char *cptr, int spos, int selector );
void firstCome(struct process *structArray);
