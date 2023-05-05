#include <stdio.h>


void Ausgabe(float durchschnitt)
{
    if (durchschnitt <= 3 && durchschnitt != 1)
    {
        printf ("hei kerig tschede, dein Durchschnitt ist:%.1f\n", durchschnitt);
    }
    else if (durchschnitt > 3)
    {
        printf ("mei kerle des war fei nix.\nDein Durschnitt ist:%.1f\n", durchschnitt);
    }
    else if (durchschnitt == 1)
    {
        printf ("streber mit deinem %.1f Durchschnitt\n", durchschnitt);
    }
}

int main()

{
    int Noten[7] = {6, 4, 5, 4, 6, 6, 2};

    float durchschnitt = 0;
    int summe = 0;

    summe = Noten[0] + Noten[1] + Noten[2] + Noten[3] + Noten[4] + Noten[5] + Noten[6];
    durchschnitt = summe / (float)7;
    Ausgabe(durchschnitt);
    return 0;
}
