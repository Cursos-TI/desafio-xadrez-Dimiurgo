#include <stdio.h>

int main() {
    // Definindo o número de casas para cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    
    printf("=== SIMULAÇÃO DE MOVIMENTO DAS PEÇAS DE XADREZ ===\n\n");
    
    // TORRE - Movimento horizontal (5 casas para a direita)
    // Usando estrutura FOR
    printf("TORRE - Movendo 5 casas para a direita:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // BISPO - Movimento diagonal (5 casas para cima e à direita)
    // Usando estrutura WHILE
    printf("BISPO - Movendo 5 casas na diagonal (cima e direita):\n");
    int contador_bispo = 1;
    while (contador_bispo <= casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }
    printf("\n");
    
    // RAINHA - Movimento horizontal (8 casas para a esquerda)
    // Usando estrutura DO-WHILE
    printf("RAINHA - Movendo 8 casas para a esquerda:\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);
    
    printf("\n=== FIM DA SIMULAÇÃO ===\n");
    
    return 0;
}