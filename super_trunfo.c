#include <stdio.h>

int main()
{
    // cartaA =
    char estadoA = 'A';
    char codigoA[8] = "A01";
    char cidadeA[20] = "Fortaleza";
    int populacaoA = 2428678;
    float areaA = 313.8;
    float pibA = 73.4;
    int pontosTuristicosA = 28;

    printf("Carta B:\n");
    printf("Codigo da Carta: %s\n", codigoA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("População: %d habitantes\n", populacaoA);
    printf("Área (Km²): %.2f\n", areaA);
    printf("PIB (bilhões): %.2f\n", pibA);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicosA);

    // cartaB =
    char estadoB = 'B';
    char codigoB[8] = "B01";
    char cidadeB[20] = "Teresina";
    int populacaoB = 648500;
    float areaB = 313.8;
    float pibB = 21.57;
    int pontosTuristicosB = 20;

    printf("Carta B:\n");
    printf("Codigo da Carta: %s\n", codigoB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("População: %d habitantes\n", populacaoB);
    printf("Área (Km²): %.2f\n", areaB);
    printf("PIB (bilhões): %.2f\n", pibB);
    printf("Pontos Turísticos: %d\n", pontosTuristicosB);

    return 0;
}
