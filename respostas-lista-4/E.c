#include <stdio.h>
#include <stdlib.h>

void insereElemento(int *v, int n)
{
  if (n > 1 && v[n - 1] < v[n - 2])
  {
    int temp = v[n - 1];
    v[n - 1] = v[n - 2];
    v[n - 2] = temp;

    insereElemento(v, n - 1);
  }
}

void ordena(int *v, int n)
{
  if (n > 1)
  {
    ordena(v, n - 1);

    insereElemento(v, n);
  }
}
