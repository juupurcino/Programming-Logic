#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>

int *array = NULL;
int size = 0;
int capacidade = 5;

// Adicionar um elemento inicio da fila.
void push(int value) {
    
    //se o tamanho for maior que capacidade duplica o tamanho do array 
    if (size >= capacidade) {  
       
        // alocando memoria para novo array
        int *novo_array = (int *)malloc((capacidade * 2) * sizeof(int));
        
        // transferindo dados do antigo array para o novo
        for (int i = 0; i < capacidade; i++) {
            novo_array[i] = array[i];
        }
       
        free(array); //liberando memoria
        array = novo_array; // novo_array vira array
        capacidade *= 2; // duplica a capacidade
    }
    
    //array recebendo os valores
    array[size] = value;
    size++; //a cada dado aumneta o tamanho do vetor
}
 
 // Remover o elemento do topo da pilha.
void pop(){
    
    // diminuindo tamanho em 1
    size --;
}

// Obter o elemento no topo da pilha sem removê-lo.
int *top(){
    
    return array[size - 1];
}

// Verificar se a pilha está vazia.
int verificar(){

    if (array == NULL){
        printf("\nEsta vazio");
    }else{
        printf("\nTem elementos");
    }
}

#endif