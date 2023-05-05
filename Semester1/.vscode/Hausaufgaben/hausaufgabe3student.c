#include <stdio.h>
#define LAENGE 25
#define ANZAHL 5



 typedef struct
{
    int matriculation_number;
    char name[LAENGE];
    double list_of_grades[ANZAHL];
 }student;

int main()
{
    student herbert = {64624, "Herbert von und zu Lindau", {1.9, 2.9, 3.0, 2.4, 2.3}};
    student zven = {49625, "Zven der Allerechte", {2.5, 3.1, 2.4, 1.5, 3.6}};

    printf ("Student %s:\nHat die ID %d\nUnd die Noten:\nMathe:%.1f\nPhysik:%.1f\nInformatik:%.1f\nGeschäftsprozesse:%.1f\nElektrotechnik:%.1f\n", zven.name, zven.matriculation_number, zven.list_of_grades[0], zven.list_of_grades[1], zven.list_of_grades[2], zven.list_of_grades[3], zven.list_of_grades[4]);
};
    