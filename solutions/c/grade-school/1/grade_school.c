#include "grade_school.h"
#include <stdio.h>

void init_roster(roster_t* new)
{
    student_t new_student;

    char  new_name[] = "";

    strcpy (new_student.name, new_name);
    new_student.grade = 0;
    
    new->count = 0;

    for (uint8_t i = 0; i < MAX_STUDENTS; i++)
    {
        new->students[i] = new_student;
    }    
}

bool check_roster(roster_t expected, roster_t actual)
{
    return (expected.count == actual.count);
}

bool add_student(roster_t* actual, char* name, int grade)
{
    student_t new_student;
    strcpy (new_student.name, name);
    new_student.grade = grade;
    
    for(size_t i = 0; i < actual->count; i++)
    {    
        if (strcmp(new_student.name, (actual->students[i].name)) == 0)
        {
            return false;
        }        
    }

    for(size_t i = 0; i <= actual->count; i++)
    {
        if (((new_student.name[0] < actual->students[i].name[0]) && (new_student.grade <= actual->students[i].grade)) || (new_student.grade < actual->students[i].grade) )
        {
            
            
                for (size_t j = actual->count; j > i; j--)
                {
                    actual->students[j] = actual->students[j - 1]; 
                
                }

                actual->students[i] = new_student;
                //printf("%s\n", actual->students[i].name);
                actual->count++;
                return true;
            
        }    
    }

    actual->students[actual->count] = new_student;
    printf("%s\n", actual->students[actual->count].name);
    actual->count++;
    return true;

}




roster_t get_grade(roster_t* roster, int desired_grade)
{
    roster_t actual;
    init_roster(&actual);
    for (size_t i = 0; i < roster->count; i++)
    {
        if (roster->students[i].grade == desired_grade)
        {
            add_student(&actual, roster->students[i].name, roster->students[i].grade);
        }
    }
    return actual;
}



void swap(student_t* x, student_t* y)
{
    student_t temp = *x;
    *x = *y;
    *y = temp;
}