#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Configura o programa para usar a codificação padrão do sistema
    int escolha;
    int sair = 0; // Flag para controle do loop

    while (!sair) {
        printf("\n========== MENU ==========\n");
        printf("1. Fatorial\n");
        printf("2. Media\n");
        printf("0. Sair\n");
        printf("==========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nVoce selecionou o calculo fatorial.\n");
        
                break;
            case 2:
                printf("\nVoce selecionou a o calculo de media.\n");

                break;
            case 0:
                printf("\nSaindo do programa. Ate mais!\n");
                sair = 1; // Encerra o loop
                break;
            default:
                printf("\nOpcao invalida. Por favor, tente novamente.\n");
        }
    }

    return 0;
}