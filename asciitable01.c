#include <stdio.h>

int main(){
    printf("Dec\tOct\tHex\tC\t\n");
    for(int x = 0; x <= 127; x++){
        if (x<33){
            printf("%d\t%o\t%x\t-\t\n", x, x, x);
        }
        else{
            printf("%d\t%o\t%x\t%c\t\n", x, x, x, x);
        }
        
    }
    return 0;
}