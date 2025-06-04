// (String – recursividade e ponteiros) Escreva uma função em C que receba uma string
// e retorne o número de consoantes presentes nela. A função deve ser recursiva e utilizar
// apenas aritmética de ponteiros.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int calcula_consoantes(char *palavras, int tamanho){
    if(*palavras=='\0'){
        return 0;
    }
    if(*palavras=='b'||*palavras=='c'||*palavras=='d'||*palavras=='f'||*palavras=='g'||*palavras=='h'||*palavras=='j'||*palavras=='k'||*palavras=='l'||*palavras=='m'||*palavras=='n'||*palavras=='p'||*palavras=='q'||*palavras=='r'||*palavras=='s'||*palavras=='t'||*palavras=='v'||*palavras=='w'||*palavras=='x'||*palavras=='y'||*palavras=='z'){
    return 1+calcula_consoantes(palavras+1, tamanho-1);
}else{
    return calcula_consoantes(palavras+1,tamanho-1);
}
}
int main(){
    char palavra[50];
    int resultado;

    printf("digite a string: ");
    scanf("%[^\n]", palavra);

    resultado=calcula_consoantes(palavra,50);

    printf("numero total de consoantes: %d", resultado);
}