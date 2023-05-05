#include <stdio.h>

int main()
{
    int input = 0;
    printf("Kerle schreib mol a Zahl nei:\n-> do hanna hi:");
    scanf("%d", &input);

    unsigned long long result = 0;
    int factor = 1;

    while (input >  0)
    {
        if(input % 2)
        {
            result += factor;
        }
        factor *= 10;
        input /= 2;
    }
    printf("Dei Zahl in binär isch:%llu\n", result);
}