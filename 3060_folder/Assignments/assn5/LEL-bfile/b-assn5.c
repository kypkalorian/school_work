#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){



	//Goal, read in files and call 4 dummy functions
	//printf("testing new line!\n");

	FILE *filePtr;

	//char buff[255];
	char *buff;

	filePtr = fopen("process-list","r");



	//char * s;
	char * inArr;

	printf("Testing!\n");

	int index = 0;

	while(1){
		char * flag = fgets(buff, 100 , filePtr);


		printf("loop iteration: %d\n",index);
		//b: loop on the char string

		//---------------------------------------->
		int idx = 0;
		while(1){

			if( *(flag + idx) == '\n' ){
				printf("break!\n");
			}

			//prints the flag
			printf("%s\n", flag + idx);
			idx++;
		}//inner loop
		//--------------------------------------->



		//break out of  while 1
		if(flag == NULL){
			printf("break!\n");
			break;
		}

		printf("---%s\n", flag);
		index++;
	}//End While

	return 0;

}




