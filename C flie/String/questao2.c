//  Faça um programa que leia uma string e imprima as quatro primeiras letras dela

#include <stdio.h>
#include <ctype.h>

int main(){
    char nome[30];

    printf("Digite seu nome: ");
    scanf("%[^\n]", nome);

    for(int i=0; i<4; i++){
        printf("%c", nome[i]);
    }
}