#include<stdio.h>
#define LENGTH  25
#define AMOUNT  3

struct Student
{
    char name[LENGTH];
    int matriculation_number;
    int grades[AMOUNT];    
};

int main()
{
    struct Student student1 = {"Uwe", 545345, {1, 5, 3}};

    printf("Student:\nName:%s\nID:%d\n", student1.name, student1.matriculation_number);

    int i = 0;
    for(i = 0; i < 3; i++)
    {
        printf("Noten:%d\n", student1.grades[i]);
    }
}