#include <stdio.h>
#include <string.h>

int main(){

	return 0;
}


char isterm(char *term){
	const char *nato[] = {
        "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
        "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
        "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
        "Sierra", "Tango", "Uniform", "Victor", "Whiskey",
        "Xray", "Yankee", "Zulu"
    };
    int x;
    char *n, *t;

    for(x=0;x<26;x++){
    	n = nato[x];
    	t = term;
    	while( *n!='\0' ){
    		if((*n|0x20)!=(*t|0x20))
    			break;
    		n++;
    		t++;
    	}
    	if( *n=='\0' )
    		return( *nato[x]);
    }
    return('\0');
}