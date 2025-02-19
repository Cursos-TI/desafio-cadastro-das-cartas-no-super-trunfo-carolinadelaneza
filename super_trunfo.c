#include <stdio.h>

int main () {
    
    int populacao;
    float area;
    float pib;
    char cidade [100];
    char estado[1];
    char cod_carta [5];
    int carta;
    int pontos_turisticos;
    
    printf("Nome da cidade:");
    scanf ("%s", cidade);

    printf("População:");
    scanf ("%d", &populacao);

    printf("Área: ");
    scanf ("%f", &area);

    printf("PIB: R$");
    scanf ("%f", &pib);

    printf("Número de pontos turísticos:");
    scanf ("%d", &pontos_turisticos);

    printf("Estado:(somente uma letra)");
    scanf("%s", estado);

    printf("Código da carta: (ex;a01,b03): ");
    scanf ("%s", cod_carta);

    return 0;
}