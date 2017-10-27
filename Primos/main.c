#include <time.h>
#include "calculos.h"

int main() {
    clock_t tInicio;
    int loop,menu;
    printf("Esse programa faz o cálculo do tempo gasto para calcular uma sequência de numeros primos de 100, 1.000, 10.000 e 100.000 iterações.\n");
    printf("\nDigite 1 para entrar ou 0 para sair\n");
    scanf("%d",&menu);
    while (menu != 0){
        printf("\nDigite o numero de iteração que desejar dentre a opção 100, 1.000, 10.000 e 100.000\n");
        scanf("%d",&loop);
        tInicio = clock();
        printf("Print dos Numeros Primos com FOR\n");
        calcula_primos_for(loop);
        printf("\n\nTempo:%f segundos\n\n",(clock() - tInicio) / (double)CLOCKS_PER_SEC);
        printf("Print dos Numeros Primos com While\n");
        calcula_primos_while(loop);
        printf("\n\nTempo:%f segundos\n",(clock() - tInicio) / (double)CLOCKS_PER_SEC);
        printf("Print dos Numeros Primos com DoWhile\n");
        calcula_primos_dowhile(loop);
        printf("\n\nTempo:%f segundos\n",(clock() - tInicio) / (double)CLOCKS_PER_SEC);
        printf("\nDigite 1 para testar outras iterações ou 0 para sair\n");
        scanf("%d",&menu);

    }



    return 0;


}