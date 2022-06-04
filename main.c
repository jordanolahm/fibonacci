#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, auxiliar = 0, i, n = 0;
  a = 0;
  b = 1;
  printf("Digite um numero: ");
  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);

  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
    printf("%d\n", auxiliar);
  }
   return 0;
}


