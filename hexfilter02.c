#include <stdio.h>

int main(){
    int ch,count=0;
    int screenlength = 80;

    while ((ch=getchar()) != EOF){
        if(ch == '\n'){printf("\n"); count = 0;}
        count++;
        printf("%02x ", ch);
        
    }
    printf("%i", count);
    return 0;
}