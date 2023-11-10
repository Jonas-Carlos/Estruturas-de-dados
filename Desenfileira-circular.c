#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

int desenfileira(fila *f, int *y);

int main()
{
    return 0;
}

int desenfileira(fila *f, int *y)
{
    if (f->p == f->u)
    {
        return 0;
    }
}
