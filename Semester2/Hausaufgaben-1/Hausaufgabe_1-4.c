#include<stdio.h>
#define LENGTH  25
#define AMOUNT  3

struct Student
{
    char name[LENGTH];
    int matriculation_number;
    float grades[AMOUNT];    
};

int main()
{
    struct Student student1 = {"Uwe", 545345, {1.4, 5.0, 4.0}};

    printf("Student:\nName:\033[35;4m%s\033[0m\nID:%d\n", student1.name, student1.matriculation_number);
    printf("Noten:\n");
    int i = 0;
    for(i = 0; i < 3; i++)
    {
        if(student1.grades[i] >= 4)
        {
        printf("\033[31m%.1f\033[0m\n", student1.grades[i]);
        }
        else
        {
        printf("%.1f\033\n", student1.grades[i]);
        }
    }
}