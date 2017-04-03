#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


//can this be the thread1/producer
//start routing goes here
static void * producer_start(void *arg)
{
	int * ptr = arg;
	printf("\nmessage from the thread function - main gave me this number!: %d\n", *ptr);

	char *ret = "lol\n";

	return ret;
}


static void * consumer_start(void *arg){
	int * ptr = arg;
	printf("\nthis is the second thread function here");

	char *ret = "\ntesting return char stuff ";

	return ret;

	//literally nothing


}



int main(){
printf("beginning program!\n");

int five = 5;
void *res;
void *result;

pthread_attr_t *myattr;
pthread_t producerThreadHandle;

pthread_attr_t *myattrc;
pthread_t consumerThreadHandle;


//creating this using just man 3

//pthread_attr_init(myattr);//initializes the attr

pthread_create(&producerThreadHandle, NULL, &producer_start, &five);
pthread_create(&consumerThreadHandle, NULL, &consumer_start, &five);

pthread_join(producerThreadHandle,  (void**)&res);
pthread_join(consumerThreadHandle, (void**)&result);

char * cptr = res;
char * cptr2 = result;

printf("Main thread now printing returned data!:  %s\n",cptr);
printf("Main thread now printing returned data!:  %s\n", cptr2);

return 0;
}
