#ifndef STUDENT_H_234634572
#define STUDENT_H_234634572
#define LENGTH  25
#define AMOUNT  3

typedef struct 
{
    char name[LENGTH];
    int id;
    float grades[AMOUNT];
    int num_of_grades;
}Student;

void student_init (Student *const student_pointer, const char name[LENGTH], int const id);
void student_print (Student *const student_pointer);
void student_add_grade (Student *const student_pointer, float exam_grade);

#endif