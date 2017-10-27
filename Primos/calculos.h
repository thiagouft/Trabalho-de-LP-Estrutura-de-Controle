//
// Created by thiago on 26/10/17.
//

#ifndef PRIMOS_CALCULOS_H
#define PRIMOS_CALCULOS_H

#include <stdio.h>
#include <malloc.h>

//Função que verifica se o numero é primo.
int primo(int valor);

//função para calcular os numeros primos de acordo com o numero de iteração.
void calcula_primos_for(int loop);
void calcula_primos_while(int valor);
void calcula_primos_dowhile(int valor);


#endif //PRIMOS_CALCULOS_H
