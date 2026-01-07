#include <stdio.h>

int main(){

    int MovimentoTorre = 5;
    int MovimentoBispo = 5;
    int MovimentoRainha = 8;
    
    printf("Simulação: Movimentação de Xadrez\n\n\n");

        // Torre 5 - DIREITA

    printf("Movimento da Torre\n");
    for (int i = 0; i < MovimentoTorre; i++){

        printf("Direita\n");
    }
    
    printf("\n\n\n");

        // Bispo 5 Diagonal - DIREITA

    printf("Movimento do Bispo\n");    
    int b = 0;
    while (b < MovimentoBispo){

        printf("Cima, Direita\n");
        b++;

    }
    
    printf("\n\n\n");

        // Rainha 8 - ESQUERDA

    printf("Movimento da Rainha\n");    
    int r = 0;

    do{

        printf("Esquerda\n");
        r++;

    } while (r < MovimentoRainha);
    printf("\n\n");
    

    return 0;

}
