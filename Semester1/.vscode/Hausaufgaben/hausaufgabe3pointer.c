#include <stdio.h>

int a = 14;
int b = 45;
int *pa = &a;
int *pb = &b;

int main()
{
printf("Variable a:%i\nVariable b:%i\nPointer auf a:%i\nPointer auf b:%i\n\n", a, b, *pa, *pb );
printf("nach Veränderung:\n\n");

int uebergang = *pa;
*pa = *pb;
*pb = uebergang;


printf("Variable a:%i\nVariable b:%i\nPointer auf a:%i\nPointer auf b:%i\n\n", a, b, *pa, *pb );
};