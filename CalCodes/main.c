#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int menu, proposicional;
    char opcao;


    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%   CAL CODES CALCULATOR   %%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");

    do{        // PERMANECER NO MENU


    printf("    MENU \n\n");

    printf("1 - SOMATORIO \n");
    printf("2 - LOGICA PROPOSICIONAL \n");
    printf("3 - MATRIZES \n");
    printf("4 - ANALISE COMBINATORIA \n");
    printf("5 - SAIR \n\n");

    printf(" * DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &menu);

    printf("\n");

    switch(menu){

    int somatoria, menusomatoria;
    case 1:

            printf("1 - Somatório de j = m até n para a regra j\n\n");
            printf("2 - Somatório de j = m até n para a regra (−j)^(j + 1)\n\n");
            printf("3 - Voltar ao Menu anterior\n\n");

    printf(" * DIGITE A OPCAO DESEJADA: ");
    scanf("%d,", &menusomatoria);
    printf("\n");

        switch(menusomatoria){
        int m, n, j, soma;
        case 1:
        printf(" - DIGITE UM VALOR PARA M: ");
        scanf("%d", &m);
        printf(" - DIGITE UM VALOR PARA N: ");
        scanf("%d", &n);

        for(j=1, soma=0; j <= n; j++){  // Somatório de j = m até n para a regra
            soma = soma + j;
        }

        printf("\n");
        printf("   RESULTADO = %d \n\n", soma);
        printf("   RETORNANDO AO MENU PRINCIAL........ \n\n");

        break;

        case 2:
        printf(" - DIGITE UM VALOR PARA M: ");
        scanf("%d", &m);
        printf(" - DIGITE UM VALOR PARA N: ");
        scanf("%d", &n);
        int aux;

        for(j=1, soma=0; j <= n; j++){  // Somatório de j = m até n para a regra (−j)^(j + 1)
            soma = pow(j, j+1);         // Falta Finalizar....
            aux = soma + 1;
        }

        printf("\n");
        printf("   RESULTADO = %d \n\n", soma);
        printf("   RETORNANDO AO MENU PRINCIAL........ \n\n");

        break;

        case 3:
        printf(" ");


        }

    break;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    case 2:                                                  // LÓGICA PROPOSICIONAL
    printf("1. ~p \n\n");
    printf("2. ~q \n\n");
    printf("3. p∧q \n\n");
    printf("4. p∨q \n\n");
    printf("5. p ⊻ q \n\n");
    printf("6. p → q \n\n");
    printf("7. p ↔ q \n\n");
    printf("8. Voltar ao Menu anterior\n\n");

    printf(" * DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &proposicional);

    switch(proposicional){
    int p, q;
    case 1:
        printf("| p | ~p |\n");
        printf("| V |  F |\n");
        printf("| F |  V |\n");
        printf("\n");
    break;

    case 2:
        printf("| q | ~q |\n");
        printf("| V |  F |\n");
        printf("| F |  V |\n");
        printf("\n");
    break;

    case 3:
        printf("| p | q | p∧q |\n");
        printf("| V | V |  V   |\n");
        printf("| V | F |  F   |\n");
        printf("| F | V |  F   |\n");
        printf("| F | F |  F   |\n");
        printf("\n");
    break;

    case 4:
        printf("| p | q | p∨q |\n");
        printf("| V | V |  V   |\n");
        printf("| V | F |  V   |\n");
        printf("| F | V |  V   |\n");
        printf("| F | F |  F   |\n");
        printf("\n");
    break;

    case 5:
        printf("| p | q | p⊻q  |\n");
        printf("| V | V |  F   |\n");
        printf("| V | F |  V   |\n");
        printf("| F | V |  V   |\n");
        printf("| F | F |  F   |\n");
        printf("\n");
    break;

    case 6:
        printf("| p | q | p→q |\n");
        printf("| V | V |  V  |\n");
        printf("| V | F |  F  |\n");
        printf("| F | V |  V  |\n");
        printf("| F | F |  V  |\n");
        printf("\n");
    break;

    case 7:
        printf("| p | q | p↔q |\n");
        printf("| V | V |  V  |\n");
        printf("| V | F |  F  |\n");
        printf("| F | V |  F  |\n");
        printf("| F | F |  V  |\n");
        printf("\n");
    break;

    case 8:
        printf(" ");

    }


    break;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    case 3:                                                   // MATRIZES
    printf("  CODIGO EM CONSTRUCAO \n");
    break;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    case 4:                                                   // ANÁLISE COMBINATÓRIA
    printf("  CODIGO EM CONSTRUCAO \n");
    break;


    case 5:
    printf("DESCONECTANDO... \nPROGRAMA FINALIZADO COM SUCESSO!\n");                   // SAIR
    exit(1); // SAINDO SOMENTE NA OPÇÃO 5


    default:
    printf("** DIGITE UMA OPCAO VALIDA **\n\n");                  // OPÇÃO INVALIDA

    }
    }while(1);  // PERMANECER NO MENU


    printf("\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}
