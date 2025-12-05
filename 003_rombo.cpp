#include <stdio.h>

int main() {
  int side;

  printf("¿Lado?: ");
  scanf("%d", &side);

  // Draw upper triangle.
  //
  // side = 4
  //   *
  //  * *
  // * * *
  //* * * *
  for (int row = 0; row < side; row += 1) {
    // Draw whitespaces.
    for (int column = side - row - 1; column > 0; column -= 1) {
      printf(" ");
    }

    // Draw `*`.
    for (int column = -1; column < row; column += 1) {
      if (column == row - 1) {
        printf("*");
      } else {
        printf("* ");
      }
    }

    printf("\n");
  }

  // Draw lower triangle.
  //
  // side = 4
  // * * *
  //  * *
  //   *
  for (int row = side - 1; row > 0; row -= 1) {
    // Draw whitespaces.
    for (int column = side - row; column > 0; column -= 1) {
      printf(" ");
    }

    // Draw `*`.
    for (int column = row; column > 0; column -= 1) {
      if (column == 1) {
        printf("*");
      } else {
        printf("* ");
      }
    }

    printf("\n");
  }
}
