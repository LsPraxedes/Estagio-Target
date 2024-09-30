#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *invert(char *string){
    int tam = strlen(string) ;
    int crcter, i, j;

    for (i = 0, j = tam - 1; i < j; i++, j--)
    {
        crcter = string[i];
        string[i] = string[j];
        string[j] = crcter;
    }

    return string;
}


int main(){
    char string[30];

    gets(string);
    
    printf("%s\n", invert(string));

    return 0;
}