//Programa para cálculo da média de dois números
//Recebe argumentos via Launch.json.


#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[])
{

    // Modifiquei isto aqui
    const char *mensagem = getenv("CALC_MSG");
    printf("O grupo 2 é o melhor!");
    if (mensagem != NULL) {
        printf("%s\n", mensagem);
    } else {
        printf("Bem-vindo ao programa de calculo!\n");
    }

    double num1, num2, soma, media;

    // Verifica se os argumentos foram passados
    if (argc == 3) {
        num1 = atof(argv[1]);
        num2 = atof(argv[2]);
    } else {
        // Caso contrário, solicita os números ao usuário
        printf("\nInsira o primeiro numero: ");
        scanf("%lf", &num1);
        printf("Insira o segundo numero: ");
        scanf("%lf", &num2);
    }

    // Realiza os cálculos
    soma = num1 + num2;
    media = soma / 2.0;

    // Exibe os resultados
    printf("\nResultado Final.");
    printf("\nNumero 1: %.2f\n", num1);
    printf("Numero 2: %.2f\n", num2);
    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    return 0;
}
