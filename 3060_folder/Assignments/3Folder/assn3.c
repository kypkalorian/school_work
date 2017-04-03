/*
This is assignment 3 by me:
I didn't steal this or copy it from anywhere, the code is totally my own (sadly). Nor did I allow anyone to copy this code in the slightest. 

Class: 3060
Name: Colin Baxter
Date: 2/24/2017
Assignment 3


*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

static const int A_SIZE = 25;


static void * routine(void *arg)
{
	//int * nArray[A_SIZE];
	int *ptr;
	ptr = malloc(A_SIZE * sizeof(int));
	//printf("child thread prints (int)ptr: %d\n\n",(int)ptr);

	for(int i = 0; i < A_SIZE; i++)
	{
		ptr[i] = -1;
		//printf("%d\n",i);
	}


	int arg_to_factor = atoi(arg);

	if(arg_to_factor <= 1){
		//printf("return NULL\n");
		return NULL;
	}


	int current_number = arg_to_factor;
	int current_index = 0;

	ptr[current_index] = arg_to_factor;
	current_index++;

		int divisor = 2;
		for(;;){
			if(divisor >= current_number){
				ptr[current_index] = divisor;
				//printf("storing last: %d\n", divisor);
				current_index++;
				break;
			}
			else if(current_number == 0){
				//printf("break on zero\ndivisor = %d, current = %d", divisor, current_number);
				break;
				}
			else if(current_number % divisor == 0){
				//put divisor in array
				ptr[current_index] = divisor;
				//printf("stored2: %d\n", divisor);	
				current_number = current_number / divisor;
				current_index++;
			}	
			else{
				//current divisor failed
				//printf("didn't divide evenly - divisor: %d, current number: %d\n", 											divisor, current_number);
				divisor++;
			}
		}//for2
	return ptr;
}

int main(int argc, char *argv[])
{
	//printf("argc = %d\n\n", argc);

	pthread_t threadID[255];
	

	for(int i = 0; i < argc; i++)
	{
		pthread_create(&threadID[i], NULL, routine,argv[i]);
	}

	for(int  i = 0; i < argc; i++)
	{
		//printf("========================\n");
		int * retval;
		pthread_join(threadID[i], (void**)(&retval));
		
		if(retval == NULL){
			/*do nothing*/
		}
		else{
			printf("%d:",retval[0]);
			int j = 1;
			while(j < 26)
			{		
				
				//printf("printing after join!: %d\n\n",retval[j]);
				if(retval[j] <= 1)
				{
					//printf("break!: %d, J: %d\n\n", retval[j], j);
					break;
					
				}//if
				printf(" %d", retval[j]);
				j++;
			}//while
			printf("\n");

		}//else
	free(retval);//lol no idea what is going on
	}//end JOIN for
	return 0;
}//end main
