//function bodies go here
#include "functions.h"


//functions can go here


int converter(char *myString){

    //printf("converting: %s\n", myString);

	int mylen = strlen(myString);

	int i = 0;
    int j = mylen - 1;
    int total = 0;


	while(i < mylen){
        //printf("total: %d\n", total);
        if(myString[i] == '\n' || myString[i] == '\0'){
            //printf("break!");
            break;//skipping out on last characters
        }

        int temp = myString[i] - '0';

        //some janky stuff here lol
        if(temp < 0){
            //printf("caught! %d", temp);
            temp = 0;
            total = total / 10;
            break;
        }

        int idx = 0;
        int multiplier = 1;

        //mini loop
        while(idx < j){
            multiplier *= 10;
            idx++;
        }

        temp *= multiplier;
        total += temp;

        i++;
        j--;

	}
     //printf("total: %d\n", total);
	return total;
}
