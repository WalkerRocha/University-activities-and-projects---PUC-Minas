// Faça um programa que leia uma string e a imprima de trás para frente.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char palavra[30];
    int tamanho;

    printf("Digite uma palavra: ");
    scanf("%[^\n]", palavra);

    tamanho=strlen(palavra);

    for(int i=tamanho-1; i>=0; i--){
            printf("%c", palavra[i]);
    }
return 0;
}