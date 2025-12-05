#include <stdio.h>

int main() {
  int first_number, second_number, swap_aux, half_first_number;
  int greatest_common_divisor = 0;

  printf("¿Primer número?: ");
  scanf("%d", &first_number);

  printf("¿Segundo número?: ");
  scanf("%d", &second_number);

  // `second_number` will be always greater than `first_number`.
  if (first_number > second_number) {
    swap_aux = first_number;
    first_number = second_number;
    second_number = swap_aux;
  }

  // It may happen that `first_number` is the Greatest Common Divisor for
  // himself and for `second_number`.
  if (second_number % first_number == 0) {
    greatest_common_divisor = first_number;
  } else {
    // When `first_number` is not the Greatest Common Divisor for the two,
    // the GCD can go up to the half of `first_number`, which is less than
    // `second_number`.
    half_first_number = first_number / 2;

    for (int i = half_first_number; i > 0 && greatest_common_divisor == 0;
         i -= 1) {
      if ((first_number % i == 0) && (second_number % i == 0)) {
        greatest_common_divisor = i;
      }
    }
  }

  printf("El máximo común divisor es: %4d\n", greatest_common_divisor);
}
