#include <stdio.h>
#include <stdlib.h>

int fibo (int input, int *ptc){
    int x1=0,x2=1, t=0;
    int i;

    if(input==0)
        return 0;
    if(input==1)
        return 1;
    
    for(i=1; i<input;i++){
        t=x1+x2;
        x1=x2;
        x2=t;
        if(input==t)
            *ptc=1;
    }    
       
    return t;
}

int main(){

    int input, ptc, output;

    scanf("%d", &input);

    output = fibo(input, &ptc);

    printf("Fibonacci de %d é: %d", input, output);
    if(ptc==1)
        printf("\nO nº %d pertence à sequência de Fibonnaci", input);
    else
        printf("\nO nº %d não pertence à sequência de Fibonnaci", input);
    return 0;
}