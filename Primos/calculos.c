//
// Created by thiago on 26/10/17.
//
#include <stdio.h>
#include <malloc.h>

//Função que verifica se o numero é primo.
int primo(int valor){
    int soma = 0;
    for(int i = 1; i <=  valor; i++){
        if(valor % i == 0)
            soma++;
    }
    if(soma == 2)
        return 1;
    else
        return 0;
}
//função para calcular os numeros primos de acordo com o numero de iteração.
void calcula_primos_for(int loop){
    int soma = 0,*lista,somaLista = 0;
    for(int i = 0;i<loop;i++){

        if(primo(i)){
            soma++;
            /*if(soma == 1){
                lista = (int*)malloc(sizeof(int));
                lista[somaLista] = i;
                somaLista++;
            } else{
                lista = realloc(lista,sizeof(int)*(soma+1));
                lista[somaLista] = i;
                somaLista++;
                }*/
            printf("%d ",i);

            if((soma % 15 == 0)){
                printf("\n");
            }
        }


    }
}

void calcula_primos_while(int valor){
    int soma = 0,i = 0;
    while (i != valor){
        soma++;
        if(primo(i)){
            soma++;
            printf("%d ",i);
            i++;

            if((soma % 15 == 0)){
                printf("\n");
            }
        } else
            i++;

    }
}

void calcula_primos_dowhile(int valor){
    int soma = 0,i = 0;
    do{
        soma++;
        if(primo(i)){
            soma++;
            printf("%d ",i);
            i++;

            if((soma % 15 == 0)){
                printf("\n");
            }
        } else
            i++;

    }while (i != valor);
}

