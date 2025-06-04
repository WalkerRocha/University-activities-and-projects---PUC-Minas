// Construa um programa que leia duas strings do teclado. Imprima uma mensagem infor-
// mando se a segunda string está contida na primeira.

#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50];
    char palavra2[50];

    printf("Digite a palavra 1: ");
    scanf("%[^\n]", palavra1);
    getchar();
    
    printf("Digite a palavra 2: ");
    scanf("%[^\n]", palavra2);

    if(strstr(palavra1,palavra2)!= NULL){
        printf("A segunda string esta contida na primeira");
    }else{
        printf("A segunda string nao esta contida na primeira");
    }
return 0;
}

