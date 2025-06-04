// Escreva um programa em C que declare uma matriz de inteiros com 2 linhas e 3 colunas.
// O programa deve solicitar que o usuário insira os valores inteiros para preencher a matriz.
// Em seguida, o programa deve:
// a) Mostrar a matriz original no formato de tabela.
// b) Criar uma nova matriz chamada matrizTransposta e exibir a transposta (ou seja,
// uma matriz 3×2).
// Dica: a transposta de uma matriz transforma linhas em colunas.
// c) Calcular e exibir a soma de todos os elementos da matriz original.

#include <stdio.h>

int main(){
    int matriz1 [2] [3];
    int matriz_transposta [3] [2];
    int soma_matriz=0;

    printf("Digite os numeros que estarao na matriz: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("\n");
   
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
        printf("%d ", matriz1[i][j]);
    }
    printf("\n");
    }

    printf("\n");

    printf("Matriz transposta:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            matriz_transposta[j] [i]=matriz1[i] [j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
        printf("%d ", matriz_transposta[i][j]);
    }
    printf("\n");
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            soma_matriz+=matriz1[i][j];
        }
    }
    printf("Soma dos elementos da matriz original: %d\n", soma_matriz);
}