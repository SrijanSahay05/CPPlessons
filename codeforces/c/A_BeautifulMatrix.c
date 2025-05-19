#include <stdio.h>
#include <stdlib.h>

int main() {
  int matrix[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  int moves = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (matrix[i][j] == 1) {
        moves = abs(i - 2) + abs(j - 2);
        break;
      }
    }
  }
  printf("%d\n", moves);
}
