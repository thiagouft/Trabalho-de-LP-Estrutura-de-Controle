/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author thiago
 */
public class calculos {
    
    int loop;

    public calculos(int loop) {
        this.loop = loop;
    }
    

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
void calcula_primos_for(){
    int soma = 0;
    for(int i = 0;i<this.loop;i++){

        if(primo(i) == 1){
            soma++;
            System.out.println(i);

            if((soma % 15 == 0)){
                System.out.println("\n");
            }
        }


    }
}

void calcula_primos_while(){
    int soma = 0,i = 0;
    while (i != this.loop){
        soma++;
        if(primo(i) == 1){
            soma++;
            System.out.println(i);
            i++;

            if((soma % 15 == 0)){
                System.out.println("\n");
            }
        } else
            i++;

    }
}

void calcula_primos_dowhile(){
    int soma = 0,i = 0;
    do{
        soma++;
        if(primo(i) == 1){
            soma++;
            System.out.println(i);
            i++;

            if((soma % 15 == 0)){
                System.out.println("\n");
            }
        } else
            i++;

    }while (i != this.loop);
}
}
