// Escreva um programa que contenha três funções:
//   uma função que preencha um vetor de 5 elementos inteiros com valores fornecidos
//  pelo usuário;
//   uma função que encontre e retorne a posição do menor elemento do vetor;
//   uma função que troque o menor elemento com o primeiro e imprima o vetor resul
// tante.

#include<stdio.h> 
//Função 1:
void funcao_preencher_vetor(int vetor[], int tamanho){
    for(int i =0; i<tamanho; i++){
    scanf("%d", &vetor[i]);
    }
}

//Função2:
int funcao_menor_numero(int vetor2[], int tamanho2){
    int menor= vetor2[0];
    for(int i=0;i<tamanho2;i++){
        if(vetor2[i]<menor){
            menor=vetor2[i];
        }
    }
}

//Função3
void troca_vetor(int vetor3[], int tamanho3){
    int menor=0;
    for(int i =0; i<tamanho3; i++){
        if(vetor3[i]<vetor3[menor]){
            menor=i;
        }
    }

    if(menor != 0) { 
        int temp = vetor3[0];
        vetor3[0] = vetor3[menor];
        vetor3[menor] = temp;
}
}
