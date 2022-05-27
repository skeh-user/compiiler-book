#include<stdio.h>
#include<stdlib.h>
#define MAXLINE 120

static FILE *fpi;
static FILE *fpo;
static char line[MAXLINE];
static int lineIndex = -1;

char nextChar(){

     char ch;
     if(lineIndex == -1){
           if(fgets(line,MAXLINE, fpi) != NULL){
               fputs(line,fpo);
               lineIndex = 0;
           } else {
               printf("end of file\n");
               exit(1);
           }
     }
     if ((ch = line[lineIndex++]) == '\n'){
           lineIndex = -1;
           return ' ';
     }
     return ch;
}     
     state1 : ch = nextChar(); k = 0;A
	if (charClassT[ch] == letter)
	     goto state2;
        else
	     error();

     state2 : a[k++] = ch; ch = nextChar();
        if (charClassT[ch] == letter || charClassT[ch] == digit)
             goto state 2;
	else 
	     goto state3;
     state3 :
 
