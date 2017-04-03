static void * consumer_start(void *arg){

	int * ptr = arg;

	int counter = 0;


	char * retval = "retval lol\n";

	while(counter < BUFFER_SIZE){ // this thread will consume

		*(ptr + counter) += 55;

		counter++;
	}
	//literally nothing

	return retval;
}
