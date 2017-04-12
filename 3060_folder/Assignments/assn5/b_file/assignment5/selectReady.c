#include "functions.h"

int SelectReady(struct process * structArray, int clock){
    printf(" selectReady ");
        int ready = -1;
    /*
    None are ready -1;
    Multiple are ready -2; //error
    */

    int found = 0;
    int i = 0;

    while(i < 100){
        /*
            WAITING = 1,
            FINISHED = 3,
            CURRENT = 2,
            NOT_ARR = 0,
        */

       //finds first waiting process and sets it to running

        if(structArray[i].processStatus == 1){
           structArray[i].processStatus = 2;
           structArray[i].firstRunTime = clock;
           printf("  process[%d]setToCurrent  ", i);
            return i;
        }//check

        i++;
    }//while

    return ready;

}
