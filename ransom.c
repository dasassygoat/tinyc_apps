#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(){
    int ch;
    srand(time(NULL));
    while((ch = getchar()) != EOF){
        
        if (rand() % 100 + 1 > 51){
            putchar(toupper(ch));
        }
        else{
            putchar(ch);
        }
    }

    return(0);
}