#include <stdio.h>

int main(){
    
    return 0;
}

 char *binString(char ch){
    static char b[9];
    int i;
    i = 0;
    while(i<8){
        b[i]= ch&0x80 ? '1' : '0';
        ch <<= 1;
        i++;
    }

    b[i] = '\0';

    return b;
 }