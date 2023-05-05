#include <stdio.h>
#include <stdlib.h>

int z1;
int const num_of_elements = 5;

int main()
{
    int* mal_ptr = (int*)malloc(num_of_elements * sizeof(int));
    printf("\n\033[31m=====================================\033[0m\n");
    printf("Mahlzeit, schreib mal ne Zahl rein\n");
    scanf("%d", &z1);
    mal_ptr[0] = z1;
    for (int i = 1; i < num_of_elements; i++)
    {
    printf("Noch eine:\n");
    scanf("%d", &z1);
    mal_ptr[i] = z1;
    }
    printf("\033[31m=====================================\033[0m\n");
    printf("\033[31m=====================================\033[0m\n");
    printf("\033[33mSooooooo, deine Zahlen, falls se nimmer weisch, sind:\033[0m\n");

    for (int i = 0; i < num_of_elements; i++)
    {
        printf("%d\n", mal_ptr[i]);
    }
    printf("\033[31m=====================================\033[0m\n");
    free(mal_ptr);
}