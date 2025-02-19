#include <stdio.h>

int main () {
    
    int populacao;
    float area;
    float pib;
    char cidade [100];
    char estado;
    char cod_carta [15];
    int pontos_turisticos;
    
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}