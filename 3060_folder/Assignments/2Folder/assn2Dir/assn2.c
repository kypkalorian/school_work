#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char * argv[]){
	pid_t myPid  = fork();

	if(myPid == 0){
		printf("Child: myPid = 0\n argc = %d\n", argc);

		
		if(argc == 1)
		{
			printf("no arguments provided\n");
			//quits
		}
		else if( argc  > 1)
		{
			printf("one argument provided\n");
			
			char * path = "/bin/";
			char * path2 = argv[1];

			int plen = strlen(path);
			int vlen = strlen(argv[1]);

			printf("strlen of path: %d\n", plen);
			printf("strlen of argv[0]: %d\n", vlen );

			char source[25], destination[25];

			strcpy(destination, "/bin/");
			strcpy(source, argv[1]);

			strcat(destination, source);

			printf("final string destination == %s\n", destination);

			if(argc == 2){
				execl(destination,source,(char *) NULL);
			}
			else{ /*argc is more than 1*/
				
		
		
				int i = 0;
				int bp = argc - 2;
				while(1)
				{
					printf("i = %d\n", i);

					argv[i] = argv[i + 1];

					if(i >= bp)
					{
						break;
					}
					i++;
				}
				argv[argc - 1] = NULL;
				
				printf("dest: %s\n",destination);

		
				execv(destination, argv);
			}

			
		}
		else
		{
			printf("greater condition\n");
		}


	}
	else if (myPid > 0){ /*parent process*/
		printf("Parent started, waiting for child, myPid =  %d\n", myPid);
		wait(NULL);
	}
	else{
		printf("else ?");
	}




	//commenting this out since both process were printing it and I want none printing it. 
	//printf("exiting\n");

	return 0;
}






		/*printf("there are %d arguments\n",argc);

		int i = 0;

		while(i < argc){
			printf("arg%d = %s\n", i, argv[i]); 
			i++;
		}*/

		//Child uses EXEC

		//const char * myArg = "-l";

		/*execl("/bin/ls", "ls","-l",(char *) NULL);*/
