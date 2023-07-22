#include <stdio.h>
#include <string.h>

int main(){

	char sometext[64];
	char *match;

	printf("Type some text: ");
	fgets(sometext,64,stdin);

	match = strtok(sometext," ,.!:;\"'");//list of multiple delimiter characters
	while(match)
	{
		printf("%s\n", match );
		match = strtok(NULL, " "); 
	}

	return(0);
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