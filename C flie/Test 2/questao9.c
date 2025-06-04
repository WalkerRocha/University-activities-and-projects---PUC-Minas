// (String – contagem de caractere com ponteiros) Escreva uma função em C que
// receba uma string e um caractere como parâmetro e retorne quantas vezes esse caractere
// aparece na string. A função deve utilizar ponteiros e não pode utilizar índices.

#include <stdio.h>
#include <stdlib.h>

int calcula_string(char *palavra, char parametro){
    int contador=0;

    while(*palavra !='\0'){
        if(*palavra==parametro){
            contador++;
        }
    palavra++;
    }

    return contador;
}
    int main(){
        char palavra[100];
        char parametro;
        int resultado;

        printf("Digite a string que desejar: ");
        scanf("%[^\n]", palavra);
        printf("\n");

        printf("Digite a letra a ser comparada: ");
        scanf(" %c", &parametro);

        resultado= calcula_string(palavra, parametro);

        printf("o caractere aparece %d vezes", resultado);

        return 0;
    }