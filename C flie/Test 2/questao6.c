// (Matriz – alocação linearizada) Implemente um programa em C que aloque dinami-
// camente uma matriz quadrada de inteiros de tamanho 3 × 3. O programa deve preencher
// a matriz com valores aleatórios entre 1 e 50 e exibir a matriz.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *matriz;
    int tamanho=3;
    int max=50;
    int min=1;

    srand(time(NULL));

    matriz=(int*)malloc(tamanho*tamanho*sizeof(int));
    
    if(matriz==NULL){
        printf("error");
        return 1;
    }

    for(int i=0;i<tamanho*tamanho; i++){
        matriz[i]=rand()%(max-min+1)+min;
        }

    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            printf("%d ", matriz[i*3+j]);
        }
        printf("\n");
    }
    free(matriz);

return 0;
}