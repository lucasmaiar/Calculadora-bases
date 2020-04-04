#include <stdio.h>

int main()
{

    int opcao, numero;

    printf("Conversor de bases numericas, selecione opcoes abaixo: \n");
    printf("Digite 1 para decimal -> octal\n");
    printf("Digite 2 para octal -> decimal\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Digite o valor:\n");
        scanf("%d", &numero);
        printf("%d em octal: %o\n", numero, numero);
    }
    else if (opcao == 2)
    {
        printf("Digite o valor:\n");
        scanf("%o", &numero);
        printf("%o em decimal: %d\n", numero, numero);
    }
    else
    {
        printf("Opcao invalida!\n");
    }
    system("PAUSE");
    return 0;
}
