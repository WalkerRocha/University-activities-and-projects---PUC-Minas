// (Vetor com ponteiros e alocação dinâmica) Implemente um programa em C que
// leia um vetor de 10 números inteiros. Em seguida, o programa deve:
// a) Criar um segundo vetor contendo apenas os números pares do primeiro vetor, utili-
// zando ponteiros.
// b) Utilizar alocação dinâmica para armazenar o segundo vetor e imprimir seus elemen-
// tos

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int pares=0;
    int *vetor_pares;
    int *ptr;

    printf("Digite os numeros: ");
    for(int i=0; i<10; i++){
    scanf("%d", &vetor[i]);
    if(vetor[i] %2==0){
        pares++;
    }
    }

    vetor_pares=(int*)malloc(pares*sizeof(int));
        if(vetor_pares==NULL){
            printf("error");
            return 1;
        }

    ptr=vetor_pares;
    for(int i=0;i<10;i++){
        if(vetor[i]%2==0){
            *ptr=vetor[i];
            *ptr++;
        }
    }

    for(int i=0;i<pares;i++){
        printf("%d ", vetor_pares[i]);
    }
    free(vetor_pares);
    return 0;
}