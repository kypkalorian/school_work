#include "functions.h"

int checkEnd(struct process * structArray){

    int flag = 0;
    int i = 0;

    while(i < 100){
        if(structArray[i].processStatus != 3){
            return 0;
        }

        i++;
    }

    return -1;
}

        /*
            WAITING = 1,
            FINISHED = 3,
            CURRENT = 2,
            NOT_ARR = 0,
        */
