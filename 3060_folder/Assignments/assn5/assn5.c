<<<<<<< HEAD
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




=======
//starting with pseudo code


//Programs needs to READ list of process start times and durations from STDIN
	//gonna use ARGC/ARGV and what not


//4 functions
	//looping through each one to manage processes from start to finish
>>>>>>> 7974c35e25fe139d7096fc9e1e3c9ec36d96f18a
