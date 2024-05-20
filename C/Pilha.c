#include "Pilha.h"

int main(){
    
    //alocando memoria para o array
    array = (int *)malloc(capacidade * sizeof(int));

    //inserindo valores na fila
    push(10);
    push(20);
    push(30);
    push(40);

    //printando valores da fila
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    pop();

    // printando valores restantes da fila
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("%d ", top());

    verificar();
    
    free(array); //liberando memoria

}