#include <stdio.h>

int Grades[5] = {1, 2 ,4, 1, 3};
int sum = 0;
float averange = 0;

int main()
{
    int sum = Grades[0] + Grades[1] + Grades[2] + Grades[3] + Grades[4];
    float averange = (float)sum / (float)5;
    printf ("Dein Notendurchschnitt ist:%.1f", averange);
}