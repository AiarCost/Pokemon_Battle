#include <stdio.h>
#define ASCII 128

void AsciiArt(FILE *fp) {
    
    char Art[ASCII]; /* String that includes the length of all ASCII Characters */ 
    while(fgets(Art,sizeof(Art),fp)!= NULL) { /* While loop that prints characters until it hits a null type */
        printf("%s", Art);
    }
}


