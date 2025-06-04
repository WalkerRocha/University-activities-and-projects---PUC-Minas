// 5. Implemente dois procedimentos:
// preencheValores, que preenche um vetor X de 10 elementos com valores inteiros
// fornecidos pelo usuário;
// copiaNegativos, que recebe esse vetor preenchido e copia os valores negativos para
// outro vetor de até 10 elementos. Os valores copiados devem ser organizados sem
// espaços e o vetor deve conter o número 0 após o último negativo.
// A função main deve chamar esses procedimentos e imprimir os valores negativos, descon-
// siderando os zeros

#include <stdio.h>

void preenche_valores(int *vetorX, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite os valores do vetor X: ");
        scanf("%d", &vetorX[i]);
    }
}

void copia_negativos(int *vetor_negativos, int *vetorX, int tamanho) {
    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetorX[i] < 0) {
        vetor_negativos[j] = vetorX[i]; 
        j++;
    }
}
    vetor_negativos[j] = 0;
}

int main() {
    int vetorX[10];          
    int vetor_negativos[10]; 

preenche_valores(vetorX, 10);

copia_negativos(vetor_negativos, vetorX, 10);

printf("Valores negativos do vetor X: ");
    for (int i = 0; vetor_negativos[i] != 0; i++) {
        printf("%d ", vetor_negativos[i]);
    }
    printf("0\n");

return 0;
}