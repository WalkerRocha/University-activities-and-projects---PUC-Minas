// (Vetor – recursividade e ponteiros) Implemente uma função recursiva em C que
// receba um vetor de inteiros e seu tamanho, e retorne o maior valor presente no vetor. A
// função deve utilizar apenas aritmética de ponteiros.

#include <stdio.h>
#include <stdlib.h>

int maior_tamanho(int *vetor, int tamanho, int maior){
    if(tamanho==0){
        return maior;
    }
    if(maior<*vetor){
        maior=*vetor;
    }
    return maior_tamanho (vetor+1, tamanho-1, maior);
}
int main(){
    int vetor[5];
    
    int resultado;
    printf("Digite os numeros do vetor: ");
    for(int i=0;i<5; i++){
        scanf("%d", &vetor[i]);
    }
    
    resultado=maior_tamanho(vetor,5,vetor[0]);

    printf("o numero de maior tamanho eh: %d", resultado);

return 0;
}