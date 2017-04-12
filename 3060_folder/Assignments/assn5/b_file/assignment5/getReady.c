#include "functions.h"

int GetReady(struct process * structArray){
    printf(" getReady ");
    int ready = -1;
    /*
    None are ready -1;
    Multiple are ready -2; //error
    */

    int found = 0;
    int i = 0;

    while(i < 100){


        if(structArray[i].processStatus == 2){
            if(found == 1){
                printf("multiple ready processes found! ERROR!\n");
                return -2;
                //ready = -2;l
            } else { //found != true
                found = 1;
                ready = i;
            }
            //printf("found!\n");
        }//check

        i++;
    }//while
    printf("  [%d]returning ready %d  ",i, ready);
    return ready;
}
