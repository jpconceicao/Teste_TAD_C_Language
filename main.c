#include <stdio.h>
#include <stdlib.h>
#include "opmat.h"

int main()
{
    int opc, n1, n2, resultado;

    do
    {
        printf("\n#####  MENU  #####\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Sair\n");
        printf("\nSelecione a sua op��o\n");
        scanf("%d", &opc);

        switch(opc)
        {
        case 1:
            printf("\nDigite o primeiro valor: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &n2);
            resultado = Soma(n1, n2);
            printf("\n%d + %d = %d\n\n\n", n1, n2, resultado);
        break;

        case 2:
            printf("\nDigite o primeiro valor: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo valor: ");
            scanf("%d", &n2);
            resultado = Subtracao(n1, n2);
            printf("\n%d - %d = %d\n\n\n", n1, n2, resultado);
        break;

        default:
            printf("\nOp��o inv�lida, tente novamente!\0");
        }
    }while(opc!=3);

    printf("Obrigado pela prefer�ncia!");
}


