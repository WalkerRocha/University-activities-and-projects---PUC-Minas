//  1. Crie um programa que preencha um vetor com 20 valores inteiros entre 1 e 100, gera
// dos automaticamente. Em seguida, implemente uma função que receba esse vetor e um
//  número a ser buscado. A função deve imprimir todas as posições onde o número ocorre
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buscar_numero(int vetor[], int tamanho, int numero){
    int encontrado=0;
    printf("O numero %d foi encontrado nas posicoes: ", numero);

    for(int i= 0;i<tamanho;i++){
    if(vetor[i]==numero){
        printf("%d ", i);
        encontrado=1;
    }
}

    if(encontrado==0){
        printf("Nenhum numero foi encontrado.");
    }
}


int main(){
    int vetor[20];
    int numero_busca;

srand(time(NULL));

for(int i = 0; i < 20; i++){
    vetor[i] = rand() % 100 + 1;
}

printf("Numeros gerados:\n");
for(int i=0; i<20; i++){
    printf("%d ", vetor[i]);
}

printf("\n");

printf("Digite um numero para verificar: ");
    scanf("%d", &numero_busca);

buscar_numero(vetor, 20, numero_busca);

return 0;
}