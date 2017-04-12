#include "functions.h"

void arrivals(struct process * structArray, int clock){
    printf(" arrivals ");
    int i = 0;
    while(i < 100){

        if(structArray[i].processStatus == 0){

            if(structArray[i].arrivalTime <= clock){
                structArray[i].processStatus = 1; //set to waiting
                printf("   addedProcces[%d]  ", i);
            }
            if(structArray[i].arrivalTime > clock){
                printf("  arrivalTimePassesClock[%d] cl:%d  ", structArray[i].arrivalTime, clock);
                return;
                /*
                    if the process we're on has a higher arrival time than the clock we can just break out
                */
            }
        }

        i++;

    }//while

}//arrivals.c
