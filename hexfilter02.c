#include <stdio.h>

int main(){
    int ch,count=0;
    int screenlength = 80;
    for(int i=0; i<80;i++){
        printf("-");
    }
 printf("\n");
    while ((ch=getchar()) != EOF){
        if(ch == '\n'){printf("\n"); count = 0;}
        count++;
        if(count <= 26){
            printf("%02x ", ch);
        }
        else if (count == 27){
            printf("%02x", ch);
        }
        else if (count > 27){
            printf("\n%02x ", ch);
            count = 1;
        }
        
        
    }
    return 0;
}