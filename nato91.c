//
// Created by Bryan on 7/22/2023.
//
#include <stdio.h>
#include <ctype.h>

int main(){
    const char *nato[]={
            "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
            "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
            "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
            "Sierra", "Tango", "Uniform", "Victor", "Whiskey",
            "Xray", "Yankee", "Zulu"
    };
    const char *fuzz[] = {
            "Adam", "Boy", "Charles", "David", "Edward", "Frank",
            "George", "Henry", "Ida", "John", "King", "Lincoln",
            "Mary", "Nora", "Ocean", "Paul", "Queen", "Robert",
            "Sam", "Tom", "Union", "Victor", "William",
            "X-ray", "Young", "Zebra"
    };

    char phrase[64];
    char ch;
    int i;

    printf("Enter a word or phrase ");
    fgets(phrase,64,stdin);

    i = 0;
    while(phrase[i]){
        ch = toupper(phrase[i]);

        if(isalpha(ch))
            printf("%s ",nato[ch-'A']);
            printf("%s ", fuzz[ch-'A']);
        i++;
        if((i==64)){
            break;
        }
    }
    putchar('\n');

    return 0;
}