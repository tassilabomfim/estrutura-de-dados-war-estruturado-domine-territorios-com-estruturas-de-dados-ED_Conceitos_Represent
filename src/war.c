
#include <stdio.h>
#include <string.h>

/*
  ------------------------------------------------------------
  Tema 1 - Estruturas de Dados: Conceitos e Representação
  Exercício: Construção dos Territórios
  ------------------------------------------------------------
  - struct Territorio (nome, cor, tropas)
  - Cadastro de 5 territórios (entrada guiada)
  - Exibição formatada após o cadastro
  ------------------------------------------------------------
*/

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main(void) {
    Territorio territorios[5];

    printf("=== Cadastro de Territorios ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf(" %29[^\n]", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf(" %9[^\n]", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    printf("\n=== Territorios Cadastrados ===\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
