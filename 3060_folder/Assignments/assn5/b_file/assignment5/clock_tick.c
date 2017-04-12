#include "functions.h"


void clock_tick(struct process * structArray, int clock){
    printf(" tick! ");
    int i = 0;

    while(1){

        if(structArray[i].arrivalTime == 0){
            return;
        }


        if(structArray[i].processStatus == 0){
            if(structArray[i].arrivalTime > clock){
                printf(" tickDoneOnIndexNotArrived[%d]! \n", i);
                return;
            }
        }
        //if Process is waiting
        else if(structArray[i].processStatus == 1){
            printf("  addingWaitTime[%d]  ", i);
            structArray[i].waitTime++;
        }
        //if process is Curently Running!
        else if(structArray[i].processStatus == 2){

            if(structArray[i].processingTime > 0){

                structArray[i].processingTime--;
                printf("  decrementingCurrentTime[%d]  ", i);

                //if the last decrement finished off the process
                if(structArray[i].processingTime == 0){
                    structArray[i].processStatus = 3;
                    structArray[i].completeTime = clock;
                    printf("  processTerminatedAt[%d]  ", i);
                }
            }
        }
        else{
            //literally do nothing
        }



        i++;
    }//while
    printf(" tickDone! \n");
}


        /*
            WAITING = 1,
            FINISHED = 3,
            CURRENT = 2,
            NOT_ARR = 0,
        */
