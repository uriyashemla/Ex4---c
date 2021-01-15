#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h> 
#include "frequency.h"
  
#define LINE 256
 
 

// Driver 
int main(int argc , char *argv[]) 
{ 

char send[LINE] = {0}; // the word to add
char txt[1024];


node *n =  getNode(); // the root

int j = 0;
while(fgets(txt, 1024, stdin)){
    for( int i = 0 ; i < strlen(txt) ; i++){
	 	
	    if(txt[i] == ' ' || txt[i] == '\n' ){ 
		    send[j] = '\0';
		    insert(n, send);
		    memset(send,0,sizeof(send));
		    j = 0;
    	}
        if ((txt[i] >= 'A' && txt[i] <= 'Z') || (txt[i] >= 'a' && txt[i] <= 'z')){
            send[j] = txt[i];
		    j++;
        }
    }
}

char temp[LINE];

 if(argc > 1 && *(argv[1]) == 'r'){
 print(n, temp, 0, true);
 }
 else{
 print(n, temp, 0 ,false);
 }

deleteTrie(n);
	
}