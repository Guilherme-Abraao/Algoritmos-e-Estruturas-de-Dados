// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
 
// Define uma constante máxima (Entrada maxima)
#define MAX 100
 
// Protótipo da função InserionSort - Ordenação por inserção
void insertion_sort(int *a, int tamanhoVetor);
 
// Função main
int main(){

    int i, vet[MAX], tamanhoVet;

    printf("\nQuantos numeros deseja ordenar (Maximo 100): ");
    scanf("%d", &tamanhoVet);

    // Lê cada valor da entrada e armazena em um vetor 
    printf("\nDigite os numeros a serem ordenados:");
    for(i = 0; i < tamanhoVet; i++) {
        scanf("%d", &vet[i]);
    }
    
    // Ordena os valores
    insertion_sort(vet, tamanhoVet);
    
    // Imprime os valores ordenados
    printf("\nValores ordenados: ");
        for(i = 0; i < tamanhoVet; i++){
            printf("%d ", vet[i]);
        }

        return 0;
    }
    
// Função de Ordenação por Inserção
void insertion_sort(int *vetor, int tamanhoVetor){

    int i, j, tmp;
    
    for(i = 1; i < tamanhoVetor; i++){
        tmp = vetor[i];

        for(j = i-1; j >= 0 && tmp < vetor[j]; j--){
            vetor[j+1] = vetor[j];
        }

        vetor[j+1] = tmp;
    }
}