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

	while(1){
		char * flag = fgets(buff, 100 , filePtr);


		if(flag == NULL){
			printf("break!\n");
			break;
		}

		///

		/*int i = 0;
		while(1){
			if(buff[i] == "\n"){
				printf("endline!\n");
				break;
			}
			printf(buff[i]);
			i++;
		}*/
		printf("---%s\n", flag);
	}
	return 0;

}




