#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;

  // Check if the pointer is valid before dereferencing
  if (ptr != NULL) {
    *ptr = 20; 
  } else {
    fprintf(stderr, "Error: Null pointer encountered.\n");
    return 1; // Indicate an error
  }

  printf("%d\n", x);
  return 0;
} 