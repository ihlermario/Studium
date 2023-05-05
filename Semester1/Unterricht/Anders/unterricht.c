#include <stdio.h>

int main() {

  int i, j;
  int *p;

  printf("uninitialized: p points to: %p\n", p);
  p = &i;
  printf("inizialized p, unonizialized i: value *p)%d, p points to %p\n", *p,
         p);
  *p = 5;
  printf("inizialized p; inizialised i; value *p=%d, p points to %p\n", *p, p);
  j = i;
  printf("i=%d, j=%d, value *p=%d, p points to %p\n", i, j, *p, p);

  struct my_struct {
    int a;
    float b;
  } my1 = {.a = 2, .b = 3.3f};
  struct my_struct *p_my2 = &my1;
  printf(
      "Struct value a=%i from instance; struct value b=%.1f from pointer!\n\n",
      my1.a, p_my2->b);
  printf("size of char: %lu\n", sizeof(char *));
  printf("size of double: %lu\n", sizeof(double *));
  printf("size of long*: %lu\n", sizeof(long *));
};