#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

const int HUNDY = 100;

int main(int argc, char *argv[]){

	//Goal, read in files and call 4 dummy functions
	//printf("testing new line!\n");

	FILE *filePtr;

	struct process *pArray = malloc(sizeof(struct process) * HUNDY);//better than 5 arrays, better than a 1x5 array ... I think

//    pArray[0].arrivalTime = 20;
//    pArray[0].processingTime = 100;



	int arrivalTimes[100];
    int processingTimes[100];

    int waitTimes[100];
    int completionTimes[100];

//    int p = 0;
//    while(p < 100){
//        arrivalTimes[p] = NULL;
//        p++;
//    }


	//char buff[255];
	char buff[10];
	char holder[10];
	char holder2[10];

	filePtr = fopen("process-list","r");

    if(filePtr == NULL){
        printf("the file is null \n");
    }

	char flag[100];
	//printf("Testinga!\n");

	int index = 0;

	while(1){

		//printf("\n\n======================================\n*\t*\t*\t*\t\n");

		if(fgets(buff, 100, filePtr) == NULL){
            //printf("fgets returned NULL\n");
            break;
		}
		else{
            //printf("-->%s", buff);
		}

		char * flag = buff;

		//Loop here-------->
		int spos = 0;
        int i = 0;
        int mylen = strlen(buff);//loop setup stuff

        while(  i < mylen ){

            char tempChar = buff[i];
            if(tempChar == ' '){
                spos = i;
            }

            //call functions?


            i++;
        }//inner loop--------------->

        char *tempstr1 = strSplit(flag, spos, 0);
        char *tempstr2 = strSplit(flag, spos, 1);

        pArray[index].arrivalTime = converter(tempstr1);
        pArray[index].processingTime = converter(tempstr2);
        pArray[index].waitTime = 0;
        pArray[index].completeTime = -1; //marked unused
        pArray[index].firstRunTime = -1; //marked unused



        //call process thingers





        free(tempstr1);
        free(tempstr2);

		//End loop--------->


		index++;
	}//End While

	firstCome(pArray);

//
//	int k = 0;
//	while(k < 100){
//        if(arrivalTimes[k] == 0){
//            break;
//        }
//        //printf("arrival times test: [%d] = %d\n", k, arrivalTimes[k]);
//        k++;
//	}
//
//	k = 0;
//	printf("====================================\n");
//    while(k < 100){
//    if(arrivalTimes[k] == 0){
//        break;
//    }
//        //printf("process times test: [%d] = %d\n", k, processingTimes[k]);
//        k++;
//	}
//


	printf("exiting!\n");
	return 0;

}//end main function




