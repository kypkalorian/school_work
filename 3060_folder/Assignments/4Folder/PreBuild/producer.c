static void * producer_start(void *arg)
{
	int * ptr = arg;

	int counter = 0;
	while(counter < BUFFER_SIZE){
		printf("-> %d\n", *(ptr + counter)    );
		counter++;
	}

	char *ret = "lol\n";

	return ret;
}
