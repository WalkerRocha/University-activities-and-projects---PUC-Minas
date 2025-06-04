// Faça um programa que leia uma string, inverta-a e armazene o resultado na mesma
// variável. Em seguida, imprima a string invertida

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra[30];
    int tamanho;

    printf("Digite a palavra: ");
    scanf("%[^\n]", palavra);

    tamanho = strlen(palavra);

    for(int i = 0; i < tamanho / 2; i++) {
        char temp = palavra[i];
        palavra[i] = palavra[tamanho - 1 - i];
        palavra[tamanho - 1 - i] = temp;
    }

    printf("Palavra invertida: %s\n", palavra);

return 0;
}