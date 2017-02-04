#include <stdio.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char * argv[]){
	pid_t myPid  = fork();

	if(myPid == 0){
		printf("Child: myPid = 0\n");

		/*printf("there are %d arguments\n",argc);

		int i = 0;

		while(i < argc){
			printf("arg%d = %s\n", i, argv[i]); 
			i++;
		}*/

		//Child uses EXEC

		//const char * myArg = "-l";

		execl("/bin/ls", "ls","-l",(char *) NULL);



	}
	else if (myPid > 0){
		printf("Parent: myPid =  %d\n", myPid);
		wait(NULL);
	}
	else{
		printf("else ?");
	}




	//commenting this out since both process were printing it and I want none printing it. 
	//printf("exiting\n");

	return 0;
}
