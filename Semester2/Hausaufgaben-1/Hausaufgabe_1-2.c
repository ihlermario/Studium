#include <stdio.h>

int main(void)
{
    int grades[5];
    grades[0] = 2;
    grades[1] = 1;
    grades[2] = 4;
    grades[3] = 3;
    grades[4] = 2;
    
    unsigned int sum = 0;
    sum += grades[0] + grades[1] + grades[2] + grades[3] + grades[4];

    
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        printf("Note:%d\n", grades[i]);
    }
    printf("Summe:%d\n", sum);
    printf("Durchschnitt:%.1f\n", (float)sum / 5.0f );
}