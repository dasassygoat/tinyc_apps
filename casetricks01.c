#include <stdio.h>

int main(){
    char sentence[] = "ASCII makes my heart beat faster\n";
    char *s;

    s = sentence;
    while(*s){
        if( *s>='A' && *s<='Z'){
            putchar(*s | 0x20);       
        } 
        else{
            putchar(*s);
        }
        s++;
    }
    return(0);
}