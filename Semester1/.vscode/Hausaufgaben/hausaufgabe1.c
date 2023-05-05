#include <stdio.h>

int Zahl1 = 175;
int Zahl2 = 45;
float Anteil = 0;

int main()
{
    Anteil = (Zahl1 * Zahl2) / (float)100;
    printf ("%.1f Prozent\n", Anteil);
}