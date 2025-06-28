#include <stdio.h>

// ========== FUNÇÕES RECURSIVAS ==========

/**
 * Função recursiva para movimento da Torre
 * Move horizontalmente para a direita
 */
void mover_torre_recursiva(int casas_restantes) {
    // Caso base: se não há mais casas para mover, retorna
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Direita\n");
    
    // Chamada recursiva para a próxima casa
    mover_torre_recursiva(casas_restantes - 1);
}

/**
 * Função recursiva para movimento da Rainha
 * Move horizontalmente para a esquerda
 */
void mover_rainha_recursiva(int casas_restantes) {
    // Caso base: se não há mais casas para mover, retorna
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Esquerda\n");
    
    // Chamada recursiva para a próxima casa
    mover_rainha_recursiva(casas_restantes - 1);
}

// ========== FUNÇÃO PRINCIPAL ==========

int main() {
    // Definindo constantes para número de casas
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    
    printf("=== SIMULAÇÃO DE MOVIMENTO DAS PEÇAS DE XADREZ ===\n\n");
    
    // ========== TORRE - Função Recursiva ==========
    printf("TORRE - Movendo 5 casas para a direita:\n");
    mover_torre_recursiva(casas_torre);
    printf("\n");
    
    // ========== BISPO - Loops Aninhados Obrigatórios ==========
    printf("BISPO - Movendo 5 casas na diagonal (direita para cima)\n");
    
    // Loop externo controla o número total de movimentos diagonais
    for (int movimento = 1; movimento <= casas_bispo; movimento++) {
        // Loop interno com condições múltiplas para cada direção do movimento diagonal
        for (int direcao = 1; direcao <= 2; direcao++) {
            
            // Usando continue para pular impressões desnecessárias
            if (direcao > 2) {
                continue; // Nunca será executado, mas demonstra o uso
            }
            
            // Condições múltiplas para determinar qual direção imprimir
            if (direcao == 1 && movimento >= 1) {
                printf("Cima ");
            } else if (direcao == 2 && movimento >= 1) {
                printf("Direita\n");
                break; // Sai do loop interno após imprimir ambas as direções
            }
        }
    }
    printf("\n");
    
    // ========== RAINHA - Função Recursiva ==========
    printf("RAINHA - Movendo 8 casas para a esquerda:\n");
    mover_rainha_recursiva(casas_rainha);
    printf("\n");
    
    // ========== CAVALO - Loops com Variáveis e Condições Múltiplas ==========
    printf("CAVALO - Movendo em L (2 cima + 1 direita) \n");
    
    // Variáveis múltiplas para controlar o movimento em L
    int fase_movimento = 1;
    int casas_movidas = 0;
    int total_fases = 2;
    int casas_por_fase[2] = {2, 1}; // Fase 1: 2 casas, Fase 2: 1 casa
    
    // Loop externo com múltiplas condições
    for (int ciclo = 1; ciclo <= total_fases && fase_movimento <= 2; ciclo++) {
        
        // Resetar contador de casas para cada fase
        casas_movidas = 0;
        
        // Loop interno com variáveis múltiplas e condições complexas
        while (casas_movidas < casas_por_fase[fase_movimento - 1] && 
               fase_movimento <= total_fases) {
            
            // Condições múltiplas para determinar o tipo de movimento
            if (fase_movimento == 1 && casas_movidas < 2) {
                // Primeira fase: movimento vertical (para cima)
                printf("Cima\n");
                casas_movidas++;
                
                // Usar continue para otimizar o fluxo
                if (casas_movidas < casas_por_fase[fase_movimento - 1]) {
                    continue;
                }
                
            } else if (fase_movimento == 2 && casas_movidas < 1) {
                // Segunda fase: movimento horizontal (para direita)
                printf("Direita\n");
                casas_movidas++;
                
                // Usar break para sair quando completar o movimento
                if (casas_movidas >= casas_por_fase[fase_movimento - 1]) {
                    break;
                }
            }
            
            // Condição para evitar loop infinito (safety check)
            if (casas_movidas >= casas_por_fase[fase_movimento - 1]) {
                break;
            }
        }
        
        // Avançar para próxima fase do movimento
        fase_movimento++;
        
        // Usar continue para pular iterações desnecessárias
        if (fase_movimento > total_fases) {
            continue;
        }
    }
    
    printf("\n=== FIM DA SIMULAÇÃO ===\n");
    
    return 0;
}