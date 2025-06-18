#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite o tamanho do vetor: ");
    int tamanhoVetor;
    scanf("%d", &tamanhoVetor);

    int *vetorDinamico = (int*) malloc(tamanhoVetor * sizeof(int));// Aloca dinamicamente o vetor

    if (vetorDinamico == NULL) {
        printf("Erro ao alocar o vetor.\n");
        return 1;
    }

    for (int indice = 0; indice < tamanhoVetor; indice++) {
        printf("Digite o %d° elemento do vetor: ", indice + 1);
        scanf("%d", &vetorDinamico[indice]);
    }

    printf("Original: ");// Exibe os elementos originais do vetor
    for (int indice = 0; indice < tamanhoVetor; indice++) {
        printf("%d ", vetorDinamico[indice]);
    }

    int novoTamanho = tamanhoVetor / 2;

    int *vetorReduzido = (int*) realloc(vetorDinamico, novoTamanho * sizeof(int)); // Realoca o vetor 

    if (vetorReduzido != NULL) {
        vetorDinamico = vetorReduzido;

        printf("\nMetade: ");// Exibe os elementos do vetor realocado
        for (int indice = 0; indice < novoTamanho; indice++) {
            printf("%d ", vetorDinamico[indice]);
        }
    } else {
        printf("Erro ao realocar o vetor.\n");
        free(vetorDinamico);
        return 1;
    }
    
    getchar();
    free(vetorDinamico);
    return 0;
}
