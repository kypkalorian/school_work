#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


//start routing goes here
static void * thread_start(void *arg)
{
	int * ptr = arg;
	printf("message from the thread function - main gave me this number!: %d\n", *ptr);

	char *ret = "lol\n";

	return ret;
}


int main(){


int five = 5;
void *res;

pthread_attr_t *myattr;
pthread_t mythread;

char * cptr = "hello";

char c2[] = "hello";

char **ptrx2 = &cptr;

//char * cptr2 = (char*)c2[1];//this can't print

printf("string test1: %s\n", cptr);
printf("string test2: %s\n", c2);

printf("string test3: %s\n", cptr + 1);
printf("string test4: %s\n", cptr + 2);
printf("string test5: %s\n", cptr + 3);
printf("string test6: %s\n", cptr + 4);
//printf("string test3: %s\n:", cptr + 5);

printf("string test7: %s\n", c2 + 1);
printf("string test8: %s\n", c2 + 2);
printf("string test9: %s\n", c2 + 3);
printf("string test0: %s\n", c2 + 4);
//printf("string test5: %s\n", c2 + 3);

pthread_create(&mythread, NULL, &thread_start, &five);

pthread_join(mythread, (void**)&res);

cptr = res;

printf("Main thread now printing returned data!:  %s\n",cptr);


//printf("string test12: %s\n", (*cptr) + 1);


return 0;//cuz reasons
}
