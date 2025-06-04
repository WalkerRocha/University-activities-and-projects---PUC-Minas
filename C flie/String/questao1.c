// Faça um programa que leia e imprima uma string

#include <stdio.h>
#include <ctype.h>

int main(){
    char nome[30];

    printf("Digite seu nome: ");
    scanf("%[^\n]", nome);

    printf("Seu nome eh: %s", nome);
}