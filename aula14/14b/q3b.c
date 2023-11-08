struct _queue_int {
    int capacity;
    int *data;
    int size;
    int begin;
    int end;
};

typedef struct _queue_int queue_int;

void queue_int_genput(queue_int *q, int value, int index) {
    int i = q->end; //indice do proximo local vazio na fila onde o novo valor será inserido
    while (i != (q->end - index) % q->capacity) {
        int prev = (i - 1) % q->capacity;
        q->data[i] = q->data[prev];
        i = prev;
    }
    q->data[i] = value;
    q->end = (q->end + 1) % q->capacity;
    q->size++;
}