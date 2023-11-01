#include <stdio.h>
#include <stdlib.h>

struct _node {
    int value;
    struct _node *next;
};

typedef struct _node node;

struct _stack_int {
    node *top;
};

typedef struct _stack_int stack_int;

int stack_int_genpop(stack_int *s, int index) {
    node *n;
    //calculando o tamanho atual da pilha
    int size = 0;
    for (n = s->top; n != NULL; n = n->next) {
        size++;
    }

    node *p = NULL; //(anterior)
    node *n = s->top; //(atual) sinalizado como topo da pilha
    for (int i = 0; i < size - index - 1; i++) { //percorre os nós da lista ligada até o nó que deve ser removido
        p = n; //no anterior ao nó a ser removido
        n = n->next; //aponta para o nó a ser removido
    }

    if (p != NULL) { //verifica se o nó a ser removido não é o nó do topo
        p->next = n->next; //se nao for o nó do topo, o ponteiro next do nó anterior ('p->next') é atualizado para apontar para o nó seguinteao nó a ser removido ('n->next')
    //efetivamente, isso remove o nó da pilha ligando o nó anterior diretamente ao próximo nó
    } else { //se o nó a ser removido for o nó no topo da pilha
        s->top = n->next; //o ponteiro 'top' da pilha é atualizado para apontar para o próximo nó após o nó a ser removido
    //efetivamente isso remove o nó no topo da pilha
    }
    int value = n->value; //o valor do nó a ser removido é armazenado na variável 'value'
    free(n); //o nó é liberado da memória
    return value;
}