#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


//can this be the thread1/producer
//start routing goes here

const int BUFFER_SIZE = 50;


struct params {
	pthread_mutex_t mutex1;
	pthread_cond_t done;
	int count;
	int *bufferHandle;
	int myArray[50];
};

static void * producer_start(void *arg)
{
	int removed = 0; 
	struct params *loc_params = arg;

	printf("params: %d\n", loc_params->count);

	while(loc_params > (removed % 50)   ) 

	
	for(int i = 0; i < loc_params->count; i++){
		printf("blah: %d\n", *(loc_params->bufferHandle + i));
	}






	char *ret = "lol\n";
	return ret;
}


static void * consumer_start(void *arg){

	struct params *loc_params = arg;

	return retval;
}



int main(int argc, char *argv[]){

	int myArr[BUFFER_SIZE];
	int myArr2[BUFFER_SIZE];
	

	pthread_mutex_t myTex;
	pthread_mutex_init(&myTex, NULL);

	struct params *init_params = malloc(sizeof(struct params));

	init_params->bufferHandle = myArr;
	init_params->mutex1 = myTex;
	init_params->count = argc -1;

	int init = 0;//Fill array with -9s
	while(init <  BUFFER_SIZE){
		myArr[init] = -9999999;
		init++;
	}

	int filler = 1;//add in argc
	while(filler < argc){

		myArr[filler - 1] = atoi( argv[filler]);
		filler++;
	}

	pthread_mutex_lock(&myTex);
	pthread_mutex_unlock(&myTex);

	pthread_attr_t *myattr;
	pthread_t producerThreadHandle;

	pthread_attr_t *myattrc;
	pthread_t consumerThreadHandle;

	pthread_create(&producerThreadHandle, NULL, &producer_start, init_params);
	pthread_create(&consumerThreadHandle, NULL, &consumer_start, init_params);
	void * res;
	void * result;
	pthread_join(producerThreadHandle,  (void**)&res);
	/pthread_join(consumerThreadHandle, (void**)&result);

	//char * cptr = res;
	//char * cptr2 = result;

	//printf("Main thread now printing returned data!:  %s\n",cptr);
	//printf("Main thread now printing returned data!:  %s\n", cptr2);
	//printf("done\n");
	free(init_params);
	return 0;
}
