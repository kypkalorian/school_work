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

    int processStatus;
    /* WAITING = 1,
       FINISHED = 3,
       CURRENT = 2,
       NOT_ARR = 0,
    */
};

int converter(char * myString);
char* strSplit(char *cptr, int spos, int selector );

void firstCome(struct process *structArray);
void firstComeHelper(struct process * structArray);

int GetReady(struct process * structArray);
int SelectReady(struct process * structArray, int clock);

void arrivals(struct process * structArray, int clock);

void clock_tick(struct process * structArray, int clock);

int checkEnd(struct process * structArray);




