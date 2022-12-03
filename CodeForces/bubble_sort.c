#include <stdbool.h>
#include <stdio.h>

void bubble(int *arr) {
  int array_length = 5;
  // Sorting

  bool swapped = true;

  do {
    swapped = false;
    for (int i = 1; i < array_length; i++) {
      if (arr[i - 1] > arr[i]) {
        int prox = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = prox;
        swapped = true;
      }
    }

  } while (swapped);

  // printing out
  printf("{ ");
  for (int i = 0; i < array_length; i++)
    printf("%d ", arr[i]);
  printf("}");
}

int main() {
  int arr[5] = {3, 4, 5, 1, 3};

  bubble(arr);
}
