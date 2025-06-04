// 2 Implemente uma função que preencha um vetor de tamanho 100 com os 100 primeiros nú
// meros naturais que não são múltiplos de 6 e que não terminam com 6. O vetor preenchido
//  deve ser retornado e impresso na main.

#include <stdio.h>

void preencher_vetor(int vetor[], int tamanho) {
    int contador = 1;
    int i = 0;

    while (i < tamanho) {                                //verifica se o numero atende as condições,
        if (contador % 6 != 0 && contador % 10 != 6) {   //como eh de 1 a 100, se atender apenas
            vetor[i] = contador;                         //adiciona ao contador
            i++;
        }
        contador++;
    }
}

int main() {
    int vetor[100];
   
preencher_vetor(vetor, 100);//funcão void pra prenncher o vetor

for (int i = 0; i < 100; i++) {// imprimir o vetor
    printf("%d ", vetor[i]);
}
printf("\n");

return 0;
}
