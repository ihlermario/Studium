#include <stdio.h>

int main() {
  int zahlen[] = {
      7,
      4,
      5,
      9,
  };
  int i = 0;
  printf("alle Zahlen aus dem Array sind:\n");
  for (i = 0; i < 4; i++) {
    printf("%d\n", zahlen[i]);
  };
}