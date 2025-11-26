#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador;
    int numeroMenuDecisao;
    srand(time(0));
    
    //escolha de numero e forma de comparação.
    printf("### Jogo da Adivinhação! ###\n");
    printf("Para começar, insira um valor de 1 a 100\n");
    scanf("%d", &numeroJogador);
    printf("Agora escolha uma opção para comparar seu valor com o do oponente:\n");
    printf("\nAgora escolha a opção para comparar com o valor do oponente!\n");
    printf("1. Seu valor é maior que o do oponente.\n");
    printf("2. Seu valor é menor que o do oponente.\n");
    printf("3. seu valor é igual ao do oponente.\n");
    scanf("%d", &numeroMenuDecisao);
    numeroComputador = rand() % 100+1;

    //mostrar valores na tela
    printf("\nSeu numero foi: %d\n", numeroJogador);
    printf("O numero do oponente foi: %d\n", numeroComputador);

    //comparação e mostragem de resultado em tela.
    switch (numeroMenuDecisao)
    {
    case 1:
    if(numeroJogador > numeroComputador){
        printf("%d é maior que %d\n", numeroJogador, numeroComputador);
        printf("Você venceu!");
    } else {
        printf("%d não é maior que %d\n", numeroJogador, numeroComputador);
        printf("Você perdeu!");
    }
        break;
    case 2:if(numeroJogador < numeroComputador){
        printf("%d é menor que %d\n", numeroJogador, numeroComputador);
        printf("Você venceu!");
    } else {
        printf("%d não é menor que %d\n", numeroJogador, numeroComputador);
        printf("Você perdeu!");
    }
        break;
    case 3:
    if(numeroJogador == numeroComputador){
        printf("%d é igual a %d\n", numeroJogador, numeroComputador);
        printf("Você venceu!");
    } else {
        printf("%d não é igual a %d\n", numeroJogador, numeroComputador);
        printf("Você perdeu!");
    }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    return 0;
}