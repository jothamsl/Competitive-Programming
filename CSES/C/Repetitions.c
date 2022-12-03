#include <stdio.h>
#include <string.h>

int main() {
  char *dna;

  char *c;
  while (strcmp(c, "\n") == 1) {
    c = fgets(dna, 40, stdin);
    printf("%s\n", c);
    strncat(dna, c, 1);
  }
}
