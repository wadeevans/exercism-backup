#ifndef GRADE_SCHOOL_H
#define GRADE_SCHOOL_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME_LENGTH 20
#define MAX_STUDENTS 20

typedef struct {
   uint8_t grade;
   char name[MAX_NAME_LENGTH];
} student_t;

typedef struct {
   size_t count;
   student_t students[MAX_STUDENTS];
} roster_t;

// void check_roster_names();
void init_roster(roster_t* new);
bool check_roster(roster_t expected, roster_t actual);
bool add_student(roster_t* actual, char* name, int grade);
roster_t get_grade(roster_t* roster, int desired_grade);
void swap(student_t* x, student_t* y);
#endif
