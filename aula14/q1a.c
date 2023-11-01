//**Questão 1**

#include <stdio.h>
#include <stdlib.h>

struct _stack_int {
    int capacity;
    int *data;
    int size;
}; 

typedef struct _stack_int stack_int;


int stack_int_genpop(stack_int *s, int index){
    int value = s->data[index]; //recuperando o valor no índice 'index' da pilha ('s->data[index]') e armazenando-o na variável 'value'.
    s->size--; //decrementa o tamanho da pilha
    for(int i = index; i< s->size; i++){ //percorre do indice ate o size -1
        s->data[i] = s->data[i + 1]; //move os elementos subsequentes em índice para a esquerda (removendo o elemento da pilha)
    }
    return value; //retorna o valor removido
}

// caso passe o índice 'index = 0'
// o elemento tirado é o primeiro do vetor
// logo, o último da pilha
