#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(int argc, char *argv[]){



	//Goal, read in files and call 4 dummy functions
	//printf("testing new line!\n");

	FILE *filePtr;

	//char buff[255];
	char *buff;
	char holder[10];
	char holder2[10];

	filePtr = fopen("process-list1","r");


	int retval = converter("sent to converter!!\n");



	//char * s;
	//char * inArr;
	char flag[100];
	printf("Testing!\n");

	int index = 0;

	while(0){

		printf("\n\n======================================\n*\t*\t*\t*\t\n");
//		printf("dflag1\n");

		char * flag = fgets(buff, 100 , filePtr);

		//moved this higher up
		if(flag == NULL){
			printf("break!\n");
			break;
		}
		printf("--> %s\n",flag);

		printf("loop iteration: %d\n",index);
		//b: loop on the char string

		//printf("flag[0]: '%c'\n", flag[0]);

		//---------------------------------------->
		int idx = 0;
		int idx1 = 0;
		int idx2 = 0;

		int passback1 = -999;
		int passback2 = -999;

		int ind = 0;

		while(0){


			if( flag[idx]  == '\0' ){
				printf("break\n");
				break;
			}
			else if( flag[idx]  == '\n' ){
				passback2 = converter(holder2);
				printf("newline!\n");
			}
			else if(flag[idx] == ' '){
				passback1 = converter(holder);
				ind = 1;
				printf("switch!\n");
			}	//1- store first number as char, break on space
			else{
				if(ind == 0){
					holder[idx1] = flag[idx];
					printf("copying1: '%c'\n",flag[idx]);
					idx1++;
				}
				else if(ind == 1){
					holder2[idx2] = flag[idx];
					printf("copying2: '%c'\n",flag[idx]);
					idx2++;
				}
				else{
					printf("error indicating wtf was going on\n");
				}

			}
			//passback2 = converter(holder2);
			//passback1 = converter(holder);
			idx++;


		}//inner loop
		//--------------------------------------->

		//printf("---%s\n", flag);
		index++;
	}//End While

	return 0;

}




