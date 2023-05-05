#include <stdio.h>
#include <student.h>

int main()
{
    Student Karl, Nils;
    student_init(&Karl, "Karl", 6765456);
    student_init(&Nils, "Nils", 5465465);

    student_add_grade(&Karl, 4.5);
    student_add_grade(&Karl, 2.5);
    student_add_grade(&Karl, 1.2);
    student_add_grade(&Nils, 3.5);
    student_add_grade(&Nils, 3.0);
    student_add_grade(&Nils, 2.1);
    student_add_grade(&Nils, 4.5);
    student_add_grade(&Karl, 1.2);

    student_print(&Karl);
    student_print(&Nils);
}