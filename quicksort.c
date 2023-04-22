#include <stdio.h>

void quicksort(int *vetor, int esquerda, int direita){
    int i, j, aux, meio;

    i = esquerda;
    j = direita;
    meio = vetor[(esquerda+direita)/2];

    while(i <= j){
        while(vetor[i] < meio && i < direita){
            i++;
        }
        while(vetor[j] > meio && j > esquerda){
            j--;
        }
        if(i <= j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    }
    if(i < direita){
        quicksort(vetor, i, direita);

    }
    if (j > esquerda){
        quicksort(vetor, esquerda, j);
    }
}

int main(){
    int vetor[10], i;

    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    quicksort(vetor, 0, 9);

    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}