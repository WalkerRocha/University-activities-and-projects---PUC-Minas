//     (Vetor – números aleatórios) Implemente um programa em C que crie um vetor de 20
// números inteiros gerados aleatoriamente no intervalo de 1 a 100. Não pode ter números
// repetidos no vetor. O programa deve exibir os valores gerados

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int vetor[20];
    int max=100, min=1;
    int aux[20];
    srand(time(NULL));

    for(int i=0;i<20;i++){
        aux[i]= rand()% (max-min+1)+min;
        vetor[i]=aux[i];
    for(int j=0; j<i;j++){
        if(vetor[j]==aux[j]){
            vetor[j]++;
        }
    }
}
    for(int i=0; i<20; i++){
        printf("%d ", vetor[i]);
    }
return 0;
}