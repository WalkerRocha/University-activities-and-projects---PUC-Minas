// faça um programa que leia uma string e imprima uma mensagem informando se ela é um
// palíndromo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){
        char palavra[30];
        char confere[30];
        int tamanho;

    printf("digite a palavra: ");
    scanf("%[^\n]", palavra);
    
    tamanho=strlen(palavra);

    for(int i=0; i<30; i++){
        confere[i]=palavra[tamanho-1-i];
    }
    if(strcmp(confere, palavra)==0){
        printf("E um palindromo");
    }else{
        printf("Nao e um palindromo");
    }

return 0;
}


// opcao manual sem usar as funcoes da biblioteca string:

// #include <stdio.h>

// int main() {
//     char palavra[30];
//     char confere[30];
//     int tamanho = 0, eh_palindromo = 1;

//     printf("Digite a palavra: ");
//     scanf("%[^\n]", palavra);

//      Calcula o tamanho manualmente
//     while (palavra[tamanho] != '\0') {
//         tamanho++;
//     }

//     for(int i=0;i<tamanho;i++){
//         confere[i]=palavra[tamanho-1-i];
//     }

//     for(int i=0; i<tamanho; i++){
//         if(palavra[i]!=confere[i]){
//             eh_palindromo=0;
//         break;
//         }
//     }

//     if(eh_palindromo){
//         printf("Eh um palindromo");
//     }else{
//         printf("Nao eh um palindromo");
//     }
// return 0;
// }