#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 5

// Função para inicializar o teatro com todos os assentos livres [L]
void inicializarTeatro(char teatro[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            teatro[i][j] = 'L'; // L = Livre
        }
    }
}

// Função para mostrar o mapa do teatro no terminal
void exibirTeatro(char teatro[LINHAS][COLUNAS]) {
    printf("\n--- MAPA DO TEATRO (PALCO AQUI EM BAIXO) ---\n\n     ");
    for (int j = 0; j < COLUNAS; j++) {
        printf("Col %d ", j + 1);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("Fila %c: ", 'A' + i);
        for (int j = 0; j < COLUNAS; j++) {
            printf(" [%c]  ", teatro[i][j]);
        }
        printf("\n");
    }
    printf("\n[L] = Livre  |  [X] = Ocupado\n");
}

int main() {
    char teatro[LINHAS][COLUNAS];
    int opcao;
    int f_idx, c_idx;
    float faturamentoTotal = 0.0;
    int ingressosVendidos = 0;

    inicializarTeatro(teatro);

    do {
        printf("\n========================================\n");
        printf("   SISTEMA DE BILHETEIRA - STAND-UP   \n");
        printf("========================================\n");
        printf("1. Ver Mapa do Teatro\n");
        printf("2. Comprar Ingresso\n");
        printf("3. Relatorio de Vendas\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exibirTeatro(teatro);
                break;

            case 2:
                exibirTeatro(teatro);
                printf("\nDigite a fila (0 para A, 1 para B, etc. [0-%d]): ", LINHAS - 1);
                scanf("%d", &f_idx);
                printf("Digite a coluna (1 a %d): ", COLUNAS);
                scanf("%d", &c_idx);
                c_idx--; // Ajustar para o índice da matriz (0 a 4)

                if (f_idx >= 0 && f_idx < LINHAS && c_idx >= 0 && c_idx < COLUNAS) {
                    if (teatro[f_idx][c_idx] == 'L') {
                        teatro[f_idx][c_idx] = 'X';
                        faturamentoTotal += 50.0; // Valor fixo do ingresso de Stand-up
                        ingressosVendidos++;
                        printf("\n[SUCESSO] Ingresso comprado para o assento!\n");
                    } else {
                        printf("\n[ERRO] Este assento ja esta ocupado! Escolha outro.\n");
                    }
                } else {
                    printf("\n[ERRO] Assento invalido! Tente novamente.\n");
                }
                break;

            case 3:
                printf("\n--- RELATORIO FINANCEIRO ---\n");
                printf("Ingressos vendidos: %d\n", ingressosVendidos);
                printf("Faturamento total: R$ %.2f\n", faturamentoTotal);
                break;

            case 0:
                printf("\nA encerra o sistema... Obrigado!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}