#include <stdio.h>
#include <stdlib.h>



int main(){

    float vet[30]={22174.1664,24537.6698,26139.6134,0.0,0.0,26742.6612,0.0,42889.2258,46251.174,11191.4722,0.0,0.0,3847.4823,373.7838,2659.7563,48924.2448,18419.2614,0.0,0.0,35240.1826,43829.1667,18235.6852,4355.0662,13327.1025,0.0,0.0,25681.8318,1718.1221,13220.495,8414.61};
    float soma=0, menor=vet[0], maior=0;
    int i, dias0=0, diasmaior=0;

    for(i=0; i<30;i++){
        soma=soma+vet[i];
        if(vet[i]==0)
            dias0++;
        if(vet[i]<menor && vet[i]!=0)
            menor=vet[i];
        if(vet[i]>maior)
            maior=vet[i];
    }
    for(i=0;i<30;i++){
        if (vet[i]>soma/30 && vet[i]!=0)
            diasmaior++;
    }
    
    printf("O maior dia de faturamento foi: R$%f\nO menor dia de faturamento foi(com exceção de 0): R$%f\nDias em que o faturamento foi maior que a média mensal: %d", maior, menor, diasmaior);

    return 0;
}