#include <stdio.h>

int main(){
    printf("Dec\tOct\tHex\tC\t Dec\tOct\tHex\tC\t Dec\tOct\tHex\tC\t Dec\tOct\tHex\tC\n");
    for(int x = 0; x <= 31; x++){
            printf("%d %o %x %c|%d %o %x %c|%d %o %x %c|%d %o %x %c\n", x, x, x,x, x+32,x+32,x+32,x+32,x+64,x+64,x+64,x+64,x+96,x+96,x+96,x+96);
            char next;
            scanf("%c", &next);
       
    }
    return 0;
}