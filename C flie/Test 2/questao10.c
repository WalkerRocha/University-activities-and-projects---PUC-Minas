// 10. (Vetor – inversão com ponteiros) Implemente uma função em C que receba um vetor
// de inteiros e seu tamanho e inverta os elementos do vetor no próprio espaço de memória.
// A função deve utilizar apenas ponteiros e não deve utilizar vetor auxiliar.

#include <stdio.h>
#include <stdlib.h>

void vetor_invertido(int *vetor, int tamanho){
    for(int i=0; i<tamanho/2;i++){
        int temp=vetor[i];
        vetor[i]=vetor[tamanho-1-i];
        vetor[tamanho-1-i]=temp;
    }
}

int main(){
    int vetor[5];
    int resultado;

    printf("digite os elementos do vetor: ");
    for(int i=0; i<5; i++){
        scanf("%d", &vetor[i]);
    }

    vetor_invertido(vetor, 5);

    printf("resultado do vetor ivertido: ");
    for(int i=0; i<5; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}