// (Matriz – média abaixo da diagonal) Escreva uma função em C que receba uma
// matriz quadrada de inteiros alocada de forma linearizada e seu tamanho. A função deve
// calcular e retornar a média dos elementos abaixo da diagonal principal.

#include <stdio.h>
#include <stdlib.h>

float calcula_media(int *matriz, int tamanho){
    float media;
    int contador=0;
    int soma=0;
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho;j++){
            if(i>j){
                soma+=*(matriz+i*tamanho+j);
                contador++;
            }
        }
    }
    media=(float)soma/(float)contador;

    return media;
}

int main(){
    int *matriz;
    int tamanho=3;
    float resultado;

    matriz=(int*)malloc(tamanho*tamanho*sizeof(int));
    if(matriz==NULL){
        printf("error");
        return 1;
    }

    printf("Digite os numeros da matriz: ");
    for(int i=0; i<tamanho*tamanho; i++){
        scanf("%d", &matriz[i]);
    }

    resultado=calcula_media(matriz, tamanho); 
    
    printf("A media dos elementos eh: %.2f", resultado);

free(matriz);
return 0;
}