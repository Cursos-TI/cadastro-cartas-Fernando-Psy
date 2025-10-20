#include <stdio.h>
#include <string.h>

#define NUM_CARTAS 3

typedef struct {
    char codigo[4];
    long long populacao;
    double area;
    double pib;
    int pontos_turisticos;
} Carta;

int main(void) {
    Carta cartas[NUM_CARTAS];
    int i;

    printf("Cadastro de %d cartas (8 estados x 4 cidades) \n", NUM_CARTAS);

    for (i = 0; i < NUM_CARTAS; i++) {
        printf("\nCarta %d de %d\n", i + 1, NUM_CARTAS);
        printf("Codigo (ex: A01): ");
        if (scanf("%3s", cartas[i].codigo) != 1) {
            printf("Erro na leitura do codigo.\n");
            return 1;
        }

        printf("Populacao: ");
        if (scanf("%lld", &cartas[i].populacao) != 1) {
            printf("Erro na leitura da populacao.\n");
            return 1;
        }

        printf("Area: ");
        if (scanf("%lf", &cartas[i].area) != 1) {
            printf("Erro na leitura da area.\n");
            return 1;
        }

        printf("PIB: ");
        if (scanf("%lf", &cartas[i].pib) != 1) {
            printf("Erro na leitura do PIB.\n");
            return 1;
        }

        printf("Pontos Turisticos: ");
        if (scanf("%d", &cartas[i].pontos_turisticos) != 1) {
            printf("Erro na leitura dos pontos turisticos.\n");
            return 1;
        }
    }
    printf("\n===Cartas Cadastradas===\n");
    for (i = 0; i < NUM_CARTAS; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Populacao: %lld\n", cartas[i].populacao);
        printf("Area: %.2lf\n", cartas[i].area);
        printf("PIB: %.2lf\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontos_turisticos);
    }
    return 0;
}