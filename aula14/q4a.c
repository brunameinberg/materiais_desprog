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


void stack_int_push(stack_int *s, int value, int index) {
    node *p = NULL; //(aponta para o nó anterior)
    node *n = s->top; //percorre a lista ligada
    for (int i = 0; i < index; i++) { //percorre os nós da lista ligada até alcançar a posição index
        p = n; //nó anterior ao nó correspondente ao indez
        n = n->next; //aponta para o nó correspondente ao index
    }

    n = malloc(sizeof(node)); //aloca um novo nó
    n->value = value; //o novo valor é atrubuido ao novo nó
    if (p != NULL) { //se há um nó anterior ao nó que está sendo inserido.
        n->next = p->next; //o ponteiro 'next' do novo nó (n) é atualizado para apontar para o nó seguinte
        p->next = n; //o ponteiro 'next' do nó anterior ('p->next') é atualizado para apontar para o novo nó
    } else { //se o novo nó 'n' deve ser inserido no topo da pilha
        n->next = s->top; //o ponteiro next do novo nó 'n' é atualizado para apontar para o nó que estava no topo da pilha ('s->top')
        s->top = n; //o ponteiro top da pilha ('s->top') é atualizado para apontar para o novo nó 'n'
    }
}