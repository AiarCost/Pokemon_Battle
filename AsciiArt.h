#include <stdio.h>
#define ASCII 128 /* Global Variable that includes all 128 ASCII characters */

/* Used to print ASCII Art within any file 
   Contributor: Zachary Traynor            */   

void AsciiArt(FILE *fp) {
    
    char Art[ASCII]; /* String that includes the length of all ASCII Characters */ 
    while(fgets(Art,sizeof(Art),fp)!= NULL) { /* While loop that prints characters until it hits a null type */
        printf("%s", Art);
    }
}

