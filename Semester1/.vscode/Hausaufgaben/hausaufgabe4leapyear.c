#include <stdio.h>
#include<math.h>

int year = 0;

int main(void)
{
    printf("Gib dein Jahr ein: ");
    scanf("%d\n", &year);
    
    if (year % (int)4 == 0)
    {
        printf("Dein Jahr ist ein Schaltjahr\n");
    }
    else
    {
        printf("Dein Jahr ist kein Schaltjahr\n");
    }
}