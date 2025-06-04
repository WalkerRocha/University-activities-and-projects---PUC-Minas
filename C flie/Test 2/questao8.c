// (Vetor – alocação dinâmica e soma recursiva) Implemente um programa em C que
// leia um vetor de inteiros de tamanho n (definido pelo usuário). O programa deve:
// a) Utilizar alocação dinâmica para armazenar os elementos.
// b) Implementar uma função recursiva que calcule a soma dos elementos do vetor utili-
// zando apenas aritmética de ponteiros.

#include <stdio.h>
#include <stdlib.h>

int soma_elementos(int *vetor, int tamanho){
    if(tamanho==0){
        return 0;
    }
    
    return *vetor+soma_elementos(vetor+1,tamanho-1);
}

int main(){
    int *vetor;
    int tamanho;
    int resultado;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor=(int*)malloc(tamanho*sizeof(int));
    if(vetor==NULL){
        printf("error");
        return 1;
    }

    printf("digite os numeros do vetor: ");
    for(int i=0; i<tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    resultado=soma_elementos(vetor,tamanho);

    printf("resultado soma dos numeros do vetor: %d", resultado);

free(vetor);
return 0;
}
