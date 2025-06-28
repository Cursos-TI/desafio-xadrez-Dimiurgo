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
    
    
    // CAVALO - Movimento em "L" (duas casas para baixo, uma casa para a esquerda)
    // Usando loops aninhados: FOR externo e WHILE interno
    printf("CAVALO - Movendo em L (2 casas para baixo + 1 casa para a esquerda):\n");
    
    // Definindo as etapas do movimento em L do cavalo
    const int movimentos_verticais = 2;  // Duas casas para baixo
    const int movimentos_horizontais = 1; // Uma casa para a esquerda
    
    // Loop FOR externo - controla as duas fases do movimento em L
    for (int fase = 1; fase <= 2; fase++) {
        
        if (fase == 1) {
            // Primeira fase: movimento vertical (2 casas para baixo)
            int contador_vertical = 1;
            // Loop WHILE interno - executa o movimento vertical
            while (contador_vertical <= movimentos_verticais) {
                printf("Baixo\n");
                contador_vertical++;
            }
        } else {
            // Segunda fase: movimento horizontal (1 casa para a esquerda)
            int contador_horizontal = 1;
            // Loop WHILE interno - executa o movimento horizontal
            while (contador_horizontal <= movimentos_horizontais) {
                printf("Esquerda\n");
                contador_horizontal++;
            }
        }
    }
    
    printf("\n=== FIM DA SIMULAÇÃO ===\n");
    
    return 0;
}