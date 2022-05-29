#include<stdio.h>
#include<stdlib.h>
#define MAXLINE 120 /*1行の最大文字数*/

static FILE *fpi; /* Input source file */
static FILE *fpo; /* Output file of compiler */
static char line[MAXLINE]; /* Input buffer for one line*/
static int lineIndex = -1; /* Position of Next read String */

char nextChar(){  /* nextChar Function that Returnss a next string */

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
     state1 : while(ch == ' ') ch == nextChar() ;
	if(charClassT[ch] == letter)	goto state2;
	if (charClassT[ch] == digit)	goto state3;
	if (charClassT[ch] == delimiter) 	goto state4;
	error();
     state2: ch = nextChar();
	if(charClassT[ch] == letter || charClassT[ch] == digit)
	     goto state2;
	else
	     goto state5;
     state3 : ch = nextChar();
        if  (charClassT[ch] == digit)
             goto state 3;
	else 
	     goto state5;
     state4 : ch = nextChar();
     
     state5;
 
