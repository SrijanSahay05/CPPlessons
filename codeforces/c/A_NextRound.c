#include <stdio.h>

int main() {
  int size, points;
  scanf("%d %d", &size, &points);
  int arr[size];
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int key = arr[points - 1];
  int count = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] >= key && arr[i] > 0) {
      count++;
    }
  }

  printf("%d", count);
  return 0;
}
