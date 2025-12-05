#include <stdio.h>

int main() {
  int number, product;

  printf("¿Número?: ");
  scanf("%d", &number);

  printf("\n");
  printf("Tabla de multiplicar por %d\n", number);
  printf("==========================\n");

  for (int i = 1; i < 11; i += 1) {
    product = number * i;
    printf("\t%d x %2d = %3d\n", number, i, product);
  }
}
