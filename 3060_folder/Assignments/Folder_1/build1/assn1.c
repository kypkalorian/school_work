/*
Colin Baxter
CS3060-001 Spring 2017
Assignment 1

//Promise of Originality
//I promis e that this source code file has, int it's entirety, been writeen by myself and no other person or persons. If at 
//any time an exact copy of this source code is found to be used by another person in this term, I understand that both myself 
//and the student taht submitted the copy will recieve a zero on this assignment


*/



#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	
	int count = 0;

	printf("Assignment 1, 'Argument Printer', By Colin Baxter\n");
	
	while (count < argc)
	{
		printf("argument #%d: %s\n", count, argv[count]);
		count = count + 1;
	
	}
	printf("Number of arguments printed: %d\n", argc);
	return 0;	
}	
