#include "Fila.h"

int main(){
    
    //alocando memoria para o array
    array = (int *)malloc(capacidade * sizeof(int));

    //inserindo valores na fila
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    //printando valores da fila
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    dequeue();

    // printando index especifico
    int valor = get(2);
    printf("%d\n", valor);

    // printando valores restantes da fila
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    free(array); //liberando memoria

}