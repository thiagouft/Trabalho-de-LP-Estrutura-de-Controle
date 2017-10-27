import time

def primo(valor):
    soma = 0
    for i in range(1,valor+1):
        if(valor % i == 0):
            soma += 1
    if(soma == 2):
        return 1
    else:
        return 0


def calcula_primo_for(loop):
    for i in range(1,loop+1):
        if primo(i):
            print(i)

def calcula_primo_while(loop):
    i = 0
    while(i != loop):
        if primo(i):
            print(i)
            i += 1
        else:
            i += 1

var = 100000
print("Primos com FOR")
inicio = time.time()
calcula_primo_for(var)
print("Tempo:", time.time()-inicio, "Segundos")
print()
print("Primos com While")
inicio = time.time()
#calcula_primo_while(var)
print("Tempo:", time.time()-inicio, "Segundos")




