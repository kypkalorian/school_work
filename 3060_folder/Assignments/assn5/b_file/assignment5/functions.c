//function bodies go here


#include "functions.h"



char* strSplit(char *cptr, int spos, int selector){

    //char buff1[10] = {'\0','\0','\0','\0','\0'};
    char *buff1 = (char*)malloc(  (sizeof(char)*10)   );

    //char buff2[10] = {'\0','\0','\0','\0','\0'};
    char *buff2 = (char*)malloc(  (sizeof(char)*10)   );

    if(selector == 0){
        //first half of the string
        int i = 0;
        while(1){
            if(i == spos){
                break;
            }
            char temp1 = cptr[i];
            buff1[i] = temp1;
            //printf("2[%d]: %c... whole: %s\n",i, cptr[i],buff1);
            i++;
        }
        //printf("returning: %s\n", buff1);
        return buff1;

    }
    else if(selector == 1){
        //second half of the string
        int i = spos + 1;
        while(1){
            if(cptr[i] == '\n'){
                break;
            }
            char temp2 = cptr[i];
            buff2[(i - spos) - 1] = temp2;
//            if(cptr[i] != '\0'){
//                //printf("2[%d]: %c... whole: %s\n",i, cptr[i],buff2);
//            }

            i++;
        }
        //printf("returning: %s\n", buff2);
        return buff2;

    }
    else{
        printf("error, invalid selector (0 or 1)\n");
        return "bleh";
    }






}

