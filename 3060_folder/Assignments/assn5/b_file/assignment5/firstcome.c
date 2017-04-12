#include "functions.h"


void firstCome(struct process *structArray){
    printf("FCFS_ALGORTITHM\n");
    int clock = 0;
    int currentProcess = -1;
    //testing this
    //structArray[10].processStatus = 2;
            /*
            WAITING = 1,
            FINISHED = 3,
            CURRENT = 2,
            NOT_ARR = 0,
            */
    printf("pls work\n");
    while(clock < 6000)
    {


        printf("\n clock[%d] ", clock);
        //use find which process is marked ready (this should be rare)
        if(currentProcess == -1){
            currentProcess = GetReady(structArray);
        }

        //mark all arrived processes as waiting
        arrivals(structArray, clock);

        //select a process from waiting
        if(currentProcess == -1){
            currentProcess = SelectReady(structArray, clock);
        }

        clock_tick(structArray, clock);

        if(checkEnd(structArray) < 0){
            printf("exiting!\n");
            break;
        }

        currentProcess = -1;
        //rintf("clock!");
        clock++;
    }//FSFS_CLOCK_LOOP

    double aw = 0;
    double ta = 0;
    double ar = 0;

    printf("\n\n\n\n\n");

    int bean = 0;
    while(bean < 19){
        aw = aw + structArray[bean].waitTime;
        printf("waitTime: %d, ", structArray[bean].waitTime);

        ta = ta + (structArray[bean].completeTime - structArray[bean].arrivalTime);
        printf(" completeTime: %d, ",structArray[bean].completeTime);

        ar = ar +  (structArray[bean].firstRlunTime - structArray[bean].arrivalTime);
        printf(" firstRunTime: %d   ", structArray[bean].firstRunTime);

        printf("  arrivalTime: %d  ", structArray[bean].arrivalTime);

        printf("processTime: %d\n  \n\n\n\n", structArray[bean].processingTime);

        //printf("wait: %d, turn around: %d, response: %d\n", aw, ta, ar);
        bean++;

    }
    printf("\n\n\n\n");
    printf("average wait time: %f\n", aw /19);
    printf("average turnaround time: %f\n", ta / 19);
    printf("average response time: %f\n", ar / 19);



}//end FCFS_ALGORITHM
