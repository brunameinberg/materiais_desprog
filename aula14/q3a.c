
#include <stdio.h>
#include <stdlib.h>

struct _stack_int {
    int capacity;
    int *data;
    int size;
}; 

typedef struct _stack_int stack_int;

void stack_int_push(stack_int *s, int value, int index) {
    int i;
    //percorre todo o vetor de dados e desloca elementos a direita
    for (i = s->size; i > s->size - index; i--) {
        s->data[i] = s->data[i - 1];
    }
    //após o for, o i contém a posição onde o novo valor deve ser inserido
    s->data[i] = value; //insere value na posição desejada
    s->size++; //aumenta o tamanho da pilha
}