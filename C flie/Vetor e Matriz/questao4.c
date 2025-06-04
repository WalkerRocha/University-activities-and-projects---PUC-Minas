// 4. Crie uma função que receba dois vetores preenchidos A e B de 10 números inteiros cada
//  e calcule um terceiro vetor C tal que C = A- B. A função deve retornar o vetor C e a
//  main deve exibi-lo.

#include <stdio.h>

void funcao_calcula_vetor(int *vetorA, int *vetorB, int *vetorC, int tamanho){
    for(int i=0; i<tamanho; i++){
        vetorC[i]=vetorA[i]-vetorB[i];
    }
}

int main(){
    int vetorA[10]= {10,20, 30, 40, 50, 60, 70, 80, 90, 100};
    int vetorB[10]= {1,2,3,4,5,6,7,8,9,10};
    int vetorC[10];

    funcao_calcula_vetor(vetorA, vetorB, vetorC, 10);

    for(int i=0; i<10; i++){
    printf("%d ", vetorC[i]);
}
}