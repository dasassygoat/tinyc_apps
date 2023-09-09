#include <stdio.h>

int main(){
    printf("Dec\tOct\tHex\tC\t\n");
    for(int x = 0; x <= 127; x++){
        printf("%d\t%o\t%x\t%c\t\n", x, x, x, x);
    }
    return 0;
}