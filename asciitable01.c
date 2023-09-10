#include <stdio.h>

int main(){
    printf("Dec\tOct\tHex\tC\t\tDec\tOct\tHex\tC\t\tDec\tOct\tHex\tC\tDec\t\tOct\tHex\tC\t\n");
    for(int x = 0; x <= 31; x++){
            printf("%d\t%o\t%x\t%c\t|\t%d\t%o\t%x\t%c\t|\t%d\t%o\t%x\t%c\t|\t%d\t%o\t%x\t%c\t\n", x, x, x,x, x+32,x+32,x+32,x+32,x+64,x+64,x+64,x+64,x+96,x+96,x+96,x+96);
       
    }
    return 0;
}