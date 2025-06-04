// 5 (String – inversão) Implemente um programa em C que leia uma string de até 100
// caracteres e imprima a string invertida. A função strrev não deve ser utilizada.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra[100];
    int tamanho;

    printf("Digite a palavra que desejar: ");
    scanf("%[^\n]", palavra);

    tamanho=strlen(palavra);

    for(int i=tamanho-1; i>=0; i--){
        printf("%c", palavra[i]);
    }
}