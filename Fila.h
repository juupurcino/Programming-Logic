#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>

int *array = NULL;
int size = 0;
int capacidade = 5;

// Adicionar um elemento inicio da fila.
void enqueue(int value) {
    
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

// Remove o primeiro elemento da fila.
void dequeue(){
   
    //iterando ate o penultimo valor
    for (int i = 0; i < size - 1; i++) {
        
        //movendo os valores uma casa para esquerda
        array[i] = array[i + 1]; 
    }
    
    //diminuindo o tamanho
    size--;
}           
 
// Retorna o dado no index especifico
int get(int index){
    
    return array[index];
}

#endif