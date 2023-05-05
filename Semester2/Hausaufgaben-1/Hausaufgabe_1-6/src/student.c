#include <stdio.h>
#include <student.h>



void student_init (Student *const student_pointer,const char name[LENGTH], int const id)
{
    if (student_pointer  == NULL)
    {
        printf("\033[31mfatal Error\033[0m");
    }
    else
    {
        for (int i = 0; i < LENGTH; i++)
        {
            student_pointer->name[i] = name[i];
        }
        student_pointer->id = id;
        student_pointer->num_of_grades = 0;
    }
}

void student_print (Student *const student_pointer)
{
    if (student_pointer  == NULL)
    {
        printf("\033[31mfatal Error\033[0m");
    }
    else
    {
        printf("\nStudent: %s\nID: %d\n", student_pointer->name, student_pointer->id);
    
         for (int i = 0; i < AMOUNT; i++)
        {
            printf("Note %d: %.1f\n", i, student_pointer->grades[i]);
        }
    }
}
void student_add_grade (Student *const student_pointer, float exam_grade)
{
    if (student_pointer  == NULL)
    {
        printf("\033[31mfatal Error\033[0m");
    }
    else
    {
                    if (student_pointer->num_of_grades < AMOUNT)
        {
            student_pointer->grades[student_pointer->num_of_grades] = exam_grade; 
            student_pointer->num_of_grades+= 1;
        }
        else
        {
            printf("\033[31mRüdiger bitteeeeee.......nicht so vieeeel Rüdiger\n%s du kannsch nur 3 Noten eingeben\033[0m\n", student_pointer->name);
        }
    }
}