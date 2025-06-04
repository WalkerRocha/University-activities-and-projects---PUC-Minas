// Sem usar a função strlen(), faça um programa que leia uma string e imprima o número
// de caracteres presentes nela

#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra[30];
    int contador=0;

    printf("Digite a palavra que desejar: ");
    scanf("%[^\n]", palavra);

    for(int i=0; i<30 && palavra[i]!='\0';i++){
        contador++;
    }

    printf("A palavra possui %d caracteres.", contador);
}