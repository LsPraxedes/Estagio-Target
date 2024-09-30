#include <stdio.h>
#include <stdlib.h>

int main(){

    float vet[5]={67836.43,36678.66,29229.88,27165.48,19849.53};
    float soma;

    soma = vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
    printf("Porcentagem que SP representa: %f\nPorcentagem que RJ representa: %f\nPorcentagem que MG representa: %f\nPorcentagem que ES representa: %f\nPorcentagem que Outros representa: %f", vet[0]/soma*100, vet[1]/soma*100, vet[2]/soma*100, vet[3]/soma*100, vet[4]/soma*100);
    
    return 0;
}
